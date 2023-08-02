/**
   karel  - Karel robot definitions.
   @author  PUC-Minas - ICEI
   @version 0.1 - 2023-1

   Inspired by the original work (reference):
   Miroslav Binas <mirek.binas at tuke dot sk>
   (c) 2010, 2016
   https://git.kpi.fei.tuke.sk/kpi/karel-the-robot
*/

// import dependencies

// ------------------------------------ OS compatibility section

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include <time.h>

#ifndef _KAREL_H_
#define _KAREL_H_

// ------------------------------------ global definitions

// global definitions
#define NORTH   0
#define EAST    1
#define SOUTH   2
#define WEST    3

#define HWALL  '_'
#define VWALL  '|'
#define BEEPER '1'
#define BOX    '#'

#define LIFO    0
#define FIFO    1

#define OPEN    0
#define CLOSED  1

// global constants
#define WIDTH   10
#define HEIGHT  10
#define DEPTH   20

#define MAX_AVENUES  WIDTH
#define MAX_STREETS  HEIGHT

#define MAX_COMMANDS 300

// global variables (application context)
#if defined (unix) || defined (_unix) || defined (_unix)
#define OS_DELAY 1000
#else
#define OS_DELAY 1
#endif

long baseDelay   =  100 ;
long stepDelay   =   1  ;

bool has_debug   = false;

bool has_Text    = false;

// ------------------------------------ global variables

#define NO_ERROR  0
char error_txt [ 40 ];

char debug_txt [ 40 ];

char message   [ 20 ];
char msg_txt   [ 20 ];
char msg_board [ 22 ][20];


// ------------------------------------ global type definitions

/**
   world  - World structure definition.
 */
typedef
 struct s_world             // world container
 {
    int   height;
    int   width ;
    int   depth ;
    char  name [20];        // identification
                            // object container
    int   data [ HEIGHT ][ WIDTH ][ DEPTH ];
 }
 world;

/**
   ref_world - Reference to a World structure.
 */
typedef world* ref_world;   // reference

/**
   robot     - Robot structure definition.
 */
typedef
 struct   s_robot           // robot container
 {
    int   status;           // on ('|') or off ('O')

    int   avenue;           // position (x axis)
    int   street;           // position (y axis)
    int   direction;        //
    int   beepers;          // in bag

    char  symbol;           // badge
    char  name [20];        // identification
 }
 robot;

/**
   ref_robot - Reference to a Robot structure.
 */
typedef robot* ref_robot;

/**
   box - Box structure definition.
 */
typedef
 struct   s_box             // box container
 {
    int   status;           // open (']') or closed ('[')

    int   avenue;           // position (x axis)
    int   street;           // position (y axis)
    int   direction;        // LIFO or FIFO
    int   beepers;          // in box

    char  symbol;           // badge
    char  name [20];        // identification
 }
 box;

/**
   ref_box - Reference to a Box structure.
 */
typedef box* ref_box;

// ------------------------------------ global (public) context

// CAUTION: Use with care.
//          MUST be changed only if objects changes.

/**
   world_now - Current reference to a World structure.
 */
ref_world world_now = NULL;
/**
   robot_now - Current reference to a Robot structure.
 */
ref_robot robot_now = NULL;
/**
   box_now   - Current reference to a Box   structure.
 */
ref_box   box_now   = NULL;

// ------------------------------------ prototypes

void show_Text    ( char* message );

// ------------------------------------ global I/O control definitions

/**
   clrscr - Clear screen.
   OBS: OS dependent !!!
 */
void clrscr ( )
{
#if defined (unix) || defined (_unix) || defined (_unix)
//     system ( "clear" );  // for Linux
//     system ( "reset" );  // for Linux
    printf ( "\033c" );
#else
    system ( "cls" );    // for Windows
#endif
} // end clrscr ( )

/**
   clreol - Clear till the end of line.
   OBS: DISABLED
 */
void clreol ( )
{
} // end clreol ( )

/**
   gotoxy - Move focus to screen coordinates.
   @param x - x-axis coordinate
   @param y - y-axis coordinate
   OBS: DISABLED
 */
void gotoxy ( int x, int y )
{
} // end gotoxy ( )

/**
   delay - Sleep for a given number of ticks.
   @param ticks - number of ticks to rest
   OBS.:  (ANSI-C compatible)
 */
void delay( clock_t ticks )
{
     clock_t now,
             stop = clock( ) + ticks;

     do
     {  now = clock( );   }
     while ( now <= stop );
} // end delay

/**
   setSpeed - Set new step delay base.
   @param newStepDelay - new base for time control
 */
void set_Speed ( int newStep )
{
  if ( 1 <= newStep && newStep < 1000 )
  {
     stepDelay = OS_DELAY * baseDelay * newStep;
  }
} // end setSpeed ( )

// ------------------------------------ error treatment

/**
   error_code - Keep error code (global).
 */
int  error_code = NO_ERROR;

/**
   set_Error  - Set a new error code.
   @param code  to be set
 */
void set_Error ( int code )
{
     error_code = code;
} // end set_Error ( )

/**
   get_Error  - Copy current error code.
   @return current error code
 */
int  get_Error ( )
{
     return ( error_code );
} // end get_Error ( )

/**
   has_Error  - Test if there's any error code set.
   @return true, if there is an error code set;
           false, otherwise
 */
int  has_Error ( )
{
     return ( error_code != NO_ERROR );
}  // end has_Error ( )

/**
   show_Error  - Show error message.
   @param message corresponding to an error code set
 */
void show_Error ( char* message )
{
    error_code = 1;
    show_Text ( message );
}  // end show_Error ( )

/**
   fatal_Error  - Show error message and finishes program.
   @param message corresponding to an fatal error code set
 */
void fatal_Error ( char* message )
{
  printf ( "\n%s\n", message );
  exit   ( error_code );
} // end fatal_Error ( )

/**
   show_Screen - Show 22x80 screen mirror.
   @param screen - symbol matrix to be shown
 */
void show_Screen ( char screen [ ][80] )
{
    int  x = 0;

    for ( x = 21; x >= 0; x-- )
    {
        printf ( "%s\n", screen [ x ] );
        msg_board [ x ][0] = '\0';
    }
//    getchar( );
    delay ( stepDelay );
    if ( has_debug || has_Error( ) || has_Text )
    {
       fflush (stdin);
       getchar ( );
       error_code   = NO_ERROR;
       error_txt[0] = '\0';
       msg_txt  [0] = '\0';
       message  [0] = '\0';
       has_Text     = false;
    }
} // end show_Screen ( )


// ------------------------------------ world definitions

/**
   avenues - Retrive current world number of avenues.
   @return number of avenues, if there is any;
           zero, otherwise
 */
int avenues ( )
{
  int result = 0;

  ref_world v_world = world_now;

  if ( v_world != NULL )
  {
     result = v_world->width;
  }
  return ( result );
} // end avenues ( )

/**
   streets - Retrive current world number of streets.
   @return number of streets, if there is any;
           zero, otherwise
 */
int streets ( )
{
  int result = 0;

  ref_world v_world = world_now;

  if ( v_world != NULL )
  {
     result = v_world->height;
  }
  return ( result );
} // end streets ( )

/**
   areValid - Check if avenue and street are valid.
   @return true, if avenue and street are valid;
           false, otherwise
   @param avenue - slot (x)
   @param street - slot (y)
 */
bool areValid ( int avenue, int street )
{
  return ( (1 <= avenue && avenue <= avenues( ) ) &&
           (1 <= street && street <= streets( ) )  );
} // end areValid ( )

/**
   get_world - Retrieve top information of a world slot.
   @param avenue - slot (x)
   @param street - slot (y)
 */
char get_World ( int avenue, int street )
{
     char c = ' ';

     ref_world v_world = world_now;

     if ( v_world != NULL &&
          areValid ( avenue, street ) )
     {
        c = v_world->data [ street-1 ][ avenue-1 ][ 0 ];
     }

     return ( c );
} // end get_World ( )

/**
   search_world - Search a world slot for an object.
   @param avenue - slot (x)
   @param street - slot (y)
   @param object - to be searched
 */
int search_World ( int avenue, int street, char object )
{
  int  result = -1;
  int  z      = -1;
  char c;

  ref_world v_world = world_now;

  if ( v_world != NULL &&
       areValid ( avenue, street ) )
  {
       do
       {
          z = z + 1;
          c = v_world->data [ street-1 ][ avenue-1 ][ z ];
       }
       while ( z < v_world->depth-1 && c != object );
       if ( c == object )
          result = z;
  }
  return ( result );
} // end search_World ( )

/**
   has_slot - Retrieve a free space at a world slot.
   @return free space index, if there is one;
           (-1), otherwise
   @param avenue - slot (x)
   @param street - slot (y)
 */
int has_slot ( int avenue, int street )
{
  return ( search_World ( avenue, street, '.' ) );
} // end has_slot ( )

/**
   has_HWALL - Retrieve a horizontal wall index at a world slot.
   @return wall index, if there is one;
           zero, otherwise
   @param avenue - slot (x)
   @param street - slot (y)
 */
int has_HWALL  ( int avenue, int street )
{
  return ( search_World ( avenue, street, HWALL ) );
} // end has_HWALL ( )

/**
   has_VWALL - Retrieve a vertical wall index at a world slot.
   @return wall index, if there is one;
           zero, otherwise
   @param avenue - slot (x)
   @param street - slot (y)
 */
int has_VWALL  ( int avenue, int street )
{
  return ( search_World ( avenue, street, VWALL ) );
} // end has_VWALL ( )

/**
   has_BEEPER - Retrive a beeper index at a world slot.
   @return beeper index, if there is one;
           zero, otherwise
   @param avenue - slot (x)
   @param street - slot (y)
 */
int has_BEEPER ( int avenue, int street )
{
  return ( search_World ( avenue, street, BEEPER ) );
} // end has_BEEPER ( )

/**
   has_BEEPERS - Retrive number of beepers at a world slot.
   @return number of beepers
   @param avenue - slot (x)
   @param street - slot (y)
 */
int has_BEEPERS ( int avenue, int street )
{
  int  result = 0;
  int  z = -1;
  char c;

  ref_world v_world = world_now;

  if ( v_world != NULL &&
       areValid ( avenue, street ) )
  {
       do
       {
          z = z + 1;
          c = v_world->data [ street-1 ][ avenue-1 ][ z ];
          if ( c == BEEPER )
          {
             result = result + 1;
          }
       }
       while ( z < v_world->depth-1 );
  }
  return ( result );
} // end has_BEEPER ( )

/**
   has_Box - Retrive a box index at a world slot.
   @return box index, if there is one;
           zero, otherwise
   @param avenue - slot (x)
   @param street - slot (y)
 */
int has_BOX ( int avenue, int street )
{
  int  result = 0;
  int  z = -1;
  char c;

  ref_world v_world = world_now;

  if ( v_world != NULL &&
       areValid ( avenue, street ) )
  {
       do
       {
          z = z + 1;
          c = v_world->data [ street-1 ][ avenue-1 ][ z ];
          if ( 'a' <= c  && c <= 'z' )
          {
             result = c;
          }
       }
       while ( z < v_world->depth-1 );
  }
  return ( result );
} // end has_BOX ( )

/**
   has_ROBOT - Retrive if there is a specified robot at a world slot.
   @return robot index, if there is one;
           zero, otherwise
   @param avenue - slot (x)
   @param street - slot (y)
   @param symbol - robot badge symbol
 */
int has_ROBOT  ( int avenue, int street, char symbol )
{
  return ( search_World ( avenue, street, symbol ) );
} // end has_ROBOT ( )

/**
   show_World - Show current visible items in the world slots.
 */
void show_World ( )
{
    int  avenue, street;
    int  x, y, k;
    char c;
    char screen [23][80];
    char board  [23][80];

    strcpy ( board [21], "ST.+-------------------------------------------+ " );
    strcpy ( board [20], "10 |   .   .   .   .   .   .   .   .   .   .   | " );
    strcpy ( board [19], "   |                                           | " );
    strcpy ( board [18], " 9 |   .   .   .   .   .   .   .   .   .   .   | " );
    strcpy ( board [17], "   |                                           | " );
    strcpy ( board [16], " 8 |   .   .   .   .   .   .   .   .   .   .   | " );
    strcpy ( board [15], "   |                                           | " );
    strcpy ( board [14], " 7 |   .   .   .   .   .   .   .   .   .   .   | " );
    strcpy ( board [13], "   |                                           | " );
    strcpy ( board [12], " 6 |   .   .   .   .   .   .   .   .   .   .   | " );
    strcpy ( board [11], "   |                                           | " );
    strcpy ( board [10], " 5 |   .   .   .   .   .   .   .   .   .   .   | " );
    strcpy ( board [ 9], "   |                                           | " );
    strcpy ( board [ 8], " 4 |   .   .   .   .   .   .   .   .   .   .   | " );
    strcpy ( board [ 7], "   |                                           | " );
    strcpy ( board [ 6], " 3 |   .   .   .   .   .   .   .   .   .   .   | " );
    strcpy ( board [ 5], "   |                                           | " );
    strcpy ( board [ 4], " 2 |   .   .   .   .   .   .   .   .   .   .   | " );
    strcpy ( board [ 3], "   |                                           | " );
    strcpy ( board [ 2], " 1 |   .   .   .   .   .   .   .   .   .   .   | " );
    strcpy ( board [ 1], "   +-------------------------------------------+ " );
    strcpy ( board [ 0], "AVE.   1   2   3   4   5   6   7   8   9   10    " );

    clrscr ( );

    ref_world v_world = world_now;

    if ( v_world != NULL )
    {
        strcpy ( screen [21], board [21] );
        strcpy ( screen [ 1], board [ 1] );
        strcpy ( screen [ 0], board [ 0] );

        for ( street = 1; street <= streets( ); street++ )
        {
            x = 2*street;
            strcpy ( screen [  x  ], board [  x  ] );
            strcpy ( screen [ x+1 ], board [ x+1 ] );

            for ( avenue = 1; avenue <= avenues( ); avenue++ )
            {
                y = 4*avenue;
                   k = has_VWALL ( avenue, street );
                   if ( k >= 0 && avenue < v_world->width )
                   {
                      screen [ x ][ y+5 ] = '|';
                      if ( 1 < street && street < v_world->height )
                      {
                         screen [ x-1 ][ y+5 ] = '|';
                      }
                   }
                   k = has_HWALL ( avenue, street );
                   if ( k >= 0 && street < v_world->height )
                   {
                      screen [ x+1 ][ y+2 ] = '_';
                      screen [ x+1 ][ y+3 ] = '_';
                      screen [ x+1 ][ y+4 ] = '_';
                   }
                   k = has_BEEPERS ( avenue, street );
                   if ( k > 0 )
                   {
                      screen [  x  ][ y+2 ] = '(';
                      screen [  x  ][ y+3 ] = (char) ((int) '0' + k);
                      screen [  x  ][ y+4 ] = ')';
                   }
                   k = has_BOX ( avenue, street );
                   if ( k > 0 )
                   {
                      screen [  x  ][ y+2 ] = '[';
                      screen [  x  ][ y+3 ] =  k ;
                      screen [  x  ][ y+4 ] = ']';
                   }
                   c = get_World ( avenue, street );
                   if ( 'A' <= c && c <= 'Z' )
                   {
                      screen [  x  ][ y+3 ] =  c ;
                   }
            }
            strcat ( screen [ street ], msg_board [ street ] );
       }
    // compose bottom lines
       strcat ( screen [21], v_world->name );
       debug_txt [19] = '\0';
       strcat ( screen [ 1], debug_txt     );
       msg_txt   [19] = '\0';
       strcat ( screen [ 0], msg_txt       );
       show_Screen ( screen );
    }
} // end show_World ( )

// ------------------------------------ input/output treatment

/**
   show_Text  - Show text message.
   @param message to be shown.
 */
void show_Text ( char* message )
{
    if ( message != NULL )
    {
       if ( strlen ( message ) > 20 )
       {
         message [19] = '\0'; // limit = 20!
       }
       msg_txt[0] = '\0';
       strcpy ( msg_txt, message );
       has_Text = true;
       show_World ( );
    }
}  // end show_Text ( )

/**
   show_Board - Show basic robot board.
   @param line for the message.
   @param message to be shown.
 */
void show_Board ( int line, char* message )
{
    if ( message != NULL &&
        (1 <= line && line <= 20) )
    {
       msg_board [line+1][0] = '\0';
       if ( strlen ( message ) > 20 )
       {
         message [19] = '\0'; // limit = 20!
       }
       strcpy ( msg_board[line+1], message );
       has_Text = true;
       show_World ( );
    }
}  // end show_Board ( )

/**
   reset_World - Clean up world slots.
 */
void reset_World ( )
{
  int x, y, z;

  ref_world v_world = world_now;

  if ( v_world != NULL )
  {
     for ( x=0; x < v_world->height; x++ )
     for ( y=0; y < v_world->width;  y++ )
     for ( z=0; z < v_world->depth;  z++ )
     {
         v_world->data [x][y][z] = '.';
     }
     for ( x = 0; x < 21; x = x+1 )
     {
         msg_board [ x ][0] = '\0';
     }
  }
  debug_txt [0] = '\0';
  msg_txt   [0] = '\0';
} // end reset_World ( )

/**
   create_World - Set default world dimensions.
 */
void create_World ( char* name )
{
  ref_world v_world = world_now;

  if ( v_world != NULL )
  {
     v_world->height  = HEIGHT;
     v_world->width   = WIDTH ;
     v_world->depth   = DEPTH ;

     if ( name != NULL )
     {
        strcpy ( v_world->name, name );
     }
     else
     {
        strcpy ( v_world->name, "Karel Robot - v0.3" );
     }
     reset_World ( );
  }
} // end create_World ( )

/**
   set_World - Install an object at a world slot.
   @param avenue - slot (x)
   @param street - slot (y)
   @param object - object badge symbol
 */
void set_World ( int avenue, int street, char object )
{
  int  x, y;

  ref_world v_world = world_now;

  if ( v_world != NULL &&
       areValid ( avenue, street ) )
  {
       switch ( object )
       {
          case BEEPER:
            y = has_BOX  ( avenue, street );
            if ( y > 0 )
            {
               show_Error ( "ERROR: Use box." );
            }
            else
            {
               x = has_slot ( avenue, street );
               if ( x < 0 )
               {
                  show_Error ( "ERROR: No slot free." );
               }
               else
               {
                  v_world->data [ street-1 ][ avenue-1 ][ x ] = BEEPER;
               }
            }
            break;
          case BOX:
            x = has_slot ( avenue, street );
            if ( x < 0 )
            {
               show_Error ( "ERROR: No slot free." );
            }
            else
            {
               v_world->data [ street-1 ][ avenue-1 ][ x ] = BOX;
            }
            break;
          case HWALL:
            x = has_HWALL ( avenue, street );
            if ( x >= 0 )
            {
               show_Error ( "ERROR: HWall here" );
            }
            else
            {
               x = has_slot ( avenue, street );
               if ( x < 0 )
               {
                  show_Error ( "ERROR: No slot free." );
               }
               else
               {
                  v_world->data [ street-1 ][ avenue-1 ][ x ] = HWALL;
               }
            }
            break;
          case VWALL:
            x = has_VWALL ( avenue, street );
            if ( x >= 0 )
            {
               show_Error ( "ERROR: VWALL here." );
            }
            else
            {
               x = has_slot ( avenue, street );
               if ( x < 0 )
               {
                  show_Error ( "ERROR: No slot free." );
               }
               else
               {
                  v_world->data [ street-1 ][ avenue-1 ][ x ] = VWALL;
               }
            }
            break;
          default:
            if ( ('A' <= object && object <= 'Z') ||
                 ('a' <= object && object <= 'z') )
            {
                x = has_ROBOT ( avenue, street, object );
                if ( x >= 0 )
                {
                   show_Error ( "ERROR: Robot is here." );
                }
                else
                {
                   x = has_slot ( avenue, street );
                   if ( x < 0 )
                   {
                      show_Error ( "ERROR: No slot free." );
                   }
                   else
                   {
                      for ( y=v_world->depth-1; y>0; y-- )
                      {
                          v_world->data [ street-1 ][ avenue-1 ][ y ]
                        = v_world->data [ street-1 ][ avenue-1 ][ y-1 ];
                      }
                      v_world->data [ street-1 ][ avenue-1 ][ 0 ] = object;
                   }
                }
            }
       }
       show_World ( );
  }
} // end set_World ( )

/**
   remove_World  - Remove an object at a world slot.
   @param avenue - slot (x)
   @param street - slot (y)
   @param object - to be removed
 */
void remove_World ( int avenue, int street, int object )
{
  int x, y;

  ref_world v_world = world_now;

  if ( v_world != NULL )
  {
     x = search_World ( avenue, street, object );
     if ( x < 0 )
     {
        show_Error ( "ERROR: Object does not exist." );
     }
     else
     {
        for ( y = x; y < v_world->depth-1; y=y+1 )
        {
            v_world->data [ street-1 ][ avenue-1 ][ y   ]
          = v_world->data [ street-1 ][ avenue-1 ][ y+1 ];
        }
        v_world->data [ street-1 ][ avenue-1 ][ v_world->depth-1 ] = '.';
     }
  }
} // end remove_World ( )

/**
   save_World - Write current world items to a file.
   @param fileName - file identification name
 */
void save_World ( char* fileName )
{
  FILE* f_world;

  int  x, y, z;
  char c;

  ref_world v_world = world_now;

  if ( v_world != NULL )
  {
      f_world = fopen ( fileName, "wt" );
   // save current name
      fprintf ( f_world, "%s\n",
                v_world->name  );
   // save current boundaries
      fprintf ( f_world, "%d %d %d\n",
                v_world->height, v_world->width, v_world->depth  );
   // search for data and save them
      for ( x=0; x < v_world->height; x=x+1 )
      for ( y=0; y < v_world->width ; y=y+1 )
      {
          z=0;
          do
          {
                c = v_world->data [x][y][z];
                if ( (c == '|' || c == '_') ||
                     ('1' <= c && c <= '9')  )
                {
                   fprintf ( f_world, "%d %d %d %c\n", x, y, z, v_world->data[x][y][z] );
                }
                z = z + 1;
          }
          while ( z < v_world->depth && c != '.' );
     }
     fclose ( f_world );
  }
} // end save_World ( )

/**
   read_World - Read a file to restore world items.
   @param fileName - file identification name
 */
void read_World ( char* fileName )
{
  FILE* f_world;

  int  x, y, z;
  char c;
  char name[80];

  create_World ( "Karel Robot - v0.1" );

  ref_world v_world = world_now;

  if ( v_world != NULL )
  {
     f_world = fopen ( fileName, "rt" );
     fscanf  ( f_world, "%s",
               name  );
     fscanf  ( f_world, "%d %d %d",
              &x, &y, &z  );
     if ( 0 < x && x <= HEIGHT &&
          0 < y && y <= WIDTH  &&
          0 < z && z <= DEPTH  )
     {
      // set world boundaries
         v_world->height = x;
         v_world->width  = y;
         v_world->depth  = z;
      // set world name
         if ( name != NULL )
         {
            strcpy ( v_world->name, name );
         }
      // read data and fill world slots
         fscanf ( f_world, "%d %d %d %c", &x, &y, &z, &c );
         while ( ! feof ( f_world ) )
         {
               if ( 0 <= x && x < v_world->height &&
                    0 <= y && y < v_world->width  &&
                    0 <= z && z < v_world->depth   )
               {
                  v_world->data[x][y][z] = c;
               }
               fscanf ( f_world, "%d %d %d %c", &x, &y, &z, &c );
         }
     }
     fclose ( f_world );
  }
} // end read_World ( )

/**
   close_World - Close world and shutdown.
 */
void close_World ( )
{
   show_Error ( "Shutdown." );
} // end close_World ( )

// ------------------------------------ box definitions

/**
   create_Box - Set box parameters.
   @param avenue    - slot (x)
   @param street    - slot (y)
   @param direction - in world coordinates
   @param beepers   - initial beeper number
   @param status    - if robot is active or not
 */
void create_Box ( int avenue, int street,
                  int direction, int beepers, char* name, int status )
{
  int x;

  ref_box   v_box   = box_now;

  if ( areValid ( avenue, street ) &&
       LIFO <= direction && direction <= FIFO &&
       beepers >= 0 &&
       OPEN <= status && status <= CLOSED )
  {
     v_box->status    = status;

     v_box->avenue    = avenue;
     v_box->street    = street;
     v_box->direction = street;
     v_box->beepers   = beepers;

     if ( name != NULL && 
         (name[0] < 'a' || 'z' < name[0]) )
     {
         show_Error ( "ERROR: Use lowercase." );
     }
     else
     {
         strcpy ( v_box->name, name );
         v_box->symbol = v_box->name[0];

      // collect all beepers and store them
         x = has_BEEPERS ( v_box->avenue, v_box->street );
         if ( x > 0 && v_box->beepers + x < 9 )
         {
            v_box -> beepers = v_box -> beepers + x;
            do
            {
               remove_World ( v_box->avenue, v_box->street, BEEPER );
               x = x - 1;
            }
            while ( x > 0 );
         }
         set_World ( v_box->avenue, v_box->street, v_box->symbol );
     }
  }
} // end create_Box ( )

/**
   beepersInBox - Retrieve number of beepers of current robot.
   @return number of beepers
 */
int beepersInBox ( )
{
    int result = 0;

    ref_box v_box = box_now;

    if ( v_box != NULL )
    {
       result = v_box -> beepers;
    }
    return ( result );
} // end beepersInBox ( )

/**
   isEmptyBox - Test if there is any beeper into the box.
   @return number of beepers
 */
int isEmptyBox ( )
{
    int result = 1;

    ref_box v_box = box_now;

    if ( v_box != NULL )
    {
       if ( v_box -> beepers > 0 )
       {
          result = 0;
       }
    }
    return ( result );
} // end isEmptyBox ( )

/**
   checkBoxStatux - Check current box status.
   @return current box status
 */
int checkBoxStatus ( )
{
    int result = -1;

    ref_box v_box = box_now;

    if ( v_box != NULL )
    {
       result = v_box -> status;
    }
    return ( result );
} // end checkBoxStatus ( )

/**
   openBox - Open current box.
 */
void openBox ( )
{
    ref_box v_box = box_now;

    if ( v_box != NULL )
    {
       v_box -> status = OPEN;
    }
} // end openBox ( )

/**
   closeBox - Close current box.
 */
void closeBox ( )
{
    ref_box v_box = box_now;

    if ( v_box != NULL )
    {
       v_box -> status = CLOSED;
    }
} // end closeBox ( )

/**
   pullBeeperFromBox - Retrieve all beepers in the current box.
   @return number of beepers
 */
int pullBeeperFromBox ( )
{
    int result = 0;

    ref_box v_box = box_now;

    if ( v_box != NULL )
    {
       v_box -> beepers = v_box -> beepers - 1;
       result = 1;
    }
    return ( result );
}  // end pullBeepersFromBox ( )

/**
   pushBeeperInBox - Put a beeper into the box.
 */
void pushBeeperIntoBox ( )
{
    ref_box v_box = box_now;

    if ( v_box != NULL )
    {
       v_box -> beepers = v_box -> beepers + 1;
    }
} // end pushBeepersInBox ( )

// ------------------------------------ robot definitions

/**
   debug_Robot - Show current robot information.
 */
void debug_Robot ( )
{
     ref_robot v_robot = robot_now;

     if ( v_robot != NULL )
     {
        delay ( stepDelay );

        debug_txt[0]='\0';
        sprintf( debug_txt,
                 "(%c,%2c,%2d,%2d,%2c,%2d)",
                 v_robot->symbol,
                (v_robot->status==false?'O':'|'),
                 v_robot->avenue, v_robot->street,
                (v_robot->direction==0?'N':
                 v_robot->direction==1?'E':
                 v_robot->direction==2?'S':
                 v_robot->direction==3?'W':'?'),
                 v_robot->beepers );

/*
        gotoxy(1,25); clreol( );
        gotoxy(1,25); printf ( "%s", debug_txt );
*/
        show_World ( );
     }
} // end debug ( )

/**
   debug_Robot_On  - Set debug to show robot information.
 */
void debug_Robot_On ( )
{
  has_debug = true;
  debug_Robot ( );
} // end debugOn ( )

/**
   debug_Robot_Off - Reset debug to omit robot information.
 */
void debug_Robot_Off ( )
{
  has_debug = false;
} // end debugOff

/**
   checkRobotStatus - Retrieve current robot status.
   @return true , if robot is active;
           false, otherwise
 */
bool checkRobotStatus ( )
{
     ref_robot v_robot = robot_now;

     return ( v_robot != NULL && v_robot->status );
} // end checkRobotStatus ( )

/**
   turnOn - Set current robot on.
 */
void turnOn  ( )
{
     ref_robot v_robot = robot_now;

     v_robot->status = true;

     debug_Robot_On ( );
} // end turnOn ( )

/**
   turnOff - Set current robot off.
 */
void turnOff ( )
{
     ref_robot v_robot = robot_now;

     v_robot->status = false;

     show_Error ( "Robot is inactive." );

     debug_Robot_Off ( );
} // end turnOff ( )

/**
   create_Robot     - Set robot parameters.
   @param avenue    - slot (x)
   @param street    - slot (y)
   @param direction - in world coordinates
   @param beepers   - initial beeper number
   @param name s    - robot identification
 */
void create_Robot ( int avenue   , int street ,
                    int direction, int beepers, char* name )
{
  ref_robot v_robot = robot_now;

  if ( v_robot != NULL &&
       areValid ( avenue, street ) &&
       NORTH <= direction && direction <= WEST &&
       beepers >= 0 )
  {
     v_robot->status    = true;

     v_robot->avenue    = avenue;
     v_robot->street    = street;
     v_robot->direction = direction;
     v_robot->beepers   = beepers;

     if ( name != NULL &&
         (name[0] < 'A' || 'Z' < name[0]) )
     {
        show_Error ( "ERROR: Invalid name." );
     }
     else
     {
        strcpy ( v_robot->name, name );
        v_robot->symbol = v_robot->name[0];
        set_World ( v_robot->avenue, v_robot->street, v_robot->symbol );
        debug_Robot ( );
     }
  }
} // end create_Robot ( )

/**
   set_Robot        - Modify robot position at world coordinates.
   @param avenue    - slot (x)
   @param street    - slot (y)
 */
void set_Robot ( int x, int y )
{
    int  z;

    ref_world v_world = world_now;
    ref_robot v_robot = robot_now;

    if ( checkRobotStatus ( ) &&
       ( 1 <= v_robot->avenue+x && v_robot->avenue+x <= v_world->width  &&
         1 <= v_robot->street+y && v_robot->street+y <= v_world->height ) )
    {
       z = has_slot ( v_robot->avenue+x, v_robot->street+y );
       if ( z >= 0 )
       {
           remove_World ( v_robot->avenue, v_robot->street, v_robot->symbol );
           v_robot->avenue = v_robot->avenue+x;
           v_robot->street = v_robot->street+y;
           set_World    ( v_robot->avenue, v_robot->street, v_robot->symbol );
       }
       debug_Robot ( );
    }
} // end set_Robot ( )

/**
   turnLeft - Turn robot to the left of its current direction.
 */
void turnLeft ( )
{
    ref_robot v_robot = robot_now;

    if ( checkRobotStatus ( ) )
    {
       v_robot->direction = (v_robot->direction+3)%4;
       debug_Robot ( );
//     getchar( );
    }
} // end turnLeft ( )

// ------------------------------------ robot sensors

/**
   frontIsClear - Test if world slot ahead has free space for robot.
   @return true , if there is an free space;
           false, otherwise
 */
bool frontIsClear ( )
{
    int  result = true;

    ref_world v_world = world_now;
    ref_robot v_robot = robot_now;

    if ( v_robot != NULL )
    {
       switch ( v_robot->direction )
       {
          case NORTH :
              if ( v_robot->street+1 > v_world->height ||
                   has_HWALL ( v_robot->avenue  , v_robot->street   ) >= 0 )
              {
                   result = false;
              }
              break;
          case EAST  :
              if ( v_robot->avenue+1 > v_world->width ||
                   has_VWALL ( v_robot->avenue  , v_robot->street   ) >= 0 )
              {
                  result = false;
              }
              break;
          case SOUTH :
              if ( v_robot->street-1 <= 0 ||
                   has_HWALL ( v_robot->avenue  , v_robot->street-1 ) >= 0 )
              {
                  result = false;
              }
              break;
          case WEST    :
              if ( v_robot->avenue-1 <= 0 ||
                   has_VWALL ( v_robot->avenue-1, v_robot->street   ) >= 0 )
              {
                  result = false;
              }
              break;
       }
    }
    return ( result );
} // end frontIsClear ( )

/**
   leftIsClear - Test if world slot at left has free space for robot.
   @return true , if there is an free space;
           false, otherwise
 */
bool leftIsClear ( )
{
    int result = true;

    if ( checkRobotStatus ( ) )
    {
       turnLeft ( );
       result = frontIsClear ( );
       turnLeft ( );  turnLeft ( );  turnLeft ( );
    }

    return ( result );
} // end leftIsClear ( )

/**
   rightIsClear - Test if world slot at right has free space for robot.
   @return true , if there is an free space;
           false, otherwise
 */
bool rightIsClear ( )
{
    int result = true;

    if ( checkRobotStatus ( ) )
    {
       turnLeft ( );  turnLeft ( );  turnLeft ( );
       result = frontIsClear ( );
       turnLeft ( );
    }

    return ( result );
} // end rightIsClear ( )

/**
   facing - Test if current robot faces a given direction at world.
   @return true , if robot is facing the desired direction;
           false, otherwise
   @param  direction - to be tested
 */
bool facing ( int direction )
{
    bool result = false;

    ref_robot v_robot = robot_now;

    if ( checkRobotStatus ( ) )
    {
      result = ( v_robot->direction == direction );
    }

    return ( result );
} // end facing ( )

/**
   facingNorth - Test if current robot faces North.
   @return true , if robot is facing the desired direction;
           false, otherwise
 */
bool facingNorth ( )
{
     return ( facing ( NORTH ) );
} // end facingNorth ( )

/**
   facingSouth - Test if current robot faces South.
   @return true , if robot is facing the desired direction;
           false, otherwise
 */
bool facingSouth ( )
{
     return ( facing ( SOUTH ) );
} // end facingSouth ( )

/**
   facingEast - Test if current robot faces East.
   @return true , if robot is facing the desired direction;
           false, otherwise
 */
bool facingEast ( )
{
     return ( facing ( EAST ) );
} // end facingEast ( )

/**
   facingWest - Test if current robot faces West.
   @return true , if robot is facing the desired direction;
           false, otherwise
 */
bool facingWest ( )
{
     return ( facing ( WEST ) );
} // end facingWest ( )


// ------------------------------------ robot actions


/**
   move - Move current robot one slot ahead.
 */
void move ( )
{
    ref_robot v_robot = robot_now;

    if ( checkRobotStatus ( ) &&
         frontIsClear ( ) )
    {
        switch ( v_robot->direction )
        {
            case NORTH  :
              set_Robot (  0, +1 );
              break;
            case EAST  :
              set_Robot ( +1,  0 );
              break;
            case SOUTH :
              set_Robot (  0, -1 );
              break;
            case WEST  :
              set_Robot ( -1,  0 );
              break;
        }
    }
    else
    {
        show_Error ( "ERROR: Can't move." );
    }
} // end move ( )

/**
   face - Set a new direction to the current robot.
   @param direction - to be set
 */
void face ( int direction )
{
     ref_robot v_robot = robot_now;

     if ( checkRobotStatus ( ) &&
          NORTH <= direction && direction <= WEST )
     {
        v_robot->direction = direction;
     }
} // end face ( )

/**
   faceNorth - Set north as the new direction of the current robot.
 */
void faceNorth ( )
{
     face ( NORTH );
} // end faceNorth ( )

/**
   faceSouth - Set south as the new direction of the current robot.
 */
void faceSouth ( )
{
     face ( SOUTH );
} // end faceSouth ( )

/**
   faceEast - Set east   as the new direction of the current robot.
 */
void faceEast ( )
{
     face ( EAST );
} // end faceEast ( )

/**
   faceWest - Set west   as the new direction of the current robot.
 */
void faceWest ( )
{
     face ( WEST );
} // end faceWest ( )

/**
   beepers - Retrive number of beepers in the current robot bag.
   @return number of beepers in robot bag
 */
int  beepers ( )
{
    int result = 0;

    ref_robot v_robot = robot_now;

    if ( checkRobotStatus ( ) )
    {
      result = ( v_robot->beepers );
    }

    return ( result );
} // end beepers ( )

/**
   beepersInBag - Test if there is any beeper in the current robot bag.
   @return true , if there is any beeper in robot bag;
           false, otherwise
 */
bool beepersInBag ( )
{
    bool result = false;

    ref_robot v_robot = robot_now;

    if ( checkRobotStatus ( ) )
    {
      result = ( v_robot->beepers > 0 );
    }

    return ( result );
} // end beepersInBag ( )

/**
   nextToARobot - Test if there is another robot at current world slot.
   @return true , if there is any robot at the same slot;
           false, otherwise
 */
bool nextToARobot ( )
{
    bool result = false;
    char c;
    int  k=0;

    ref_world v_world = world_now;
    ref_robot v_robot = robot_now;

    if ( v_world != NULL &&
         v_robot != NULL &&
         checkRobotStatus ( )  )
    {
       do
       {
           k = k + 1;
           c = v_world->data [ v_robot->street-1 ][ v_robot->avenue-1 ][ k ];
       }
       while ( k+1 < v_world->depth &&
               ! ('A' <= c && c <= 'Z' ) );

       result = ( 'A' <= c && c <= 'Z' );
    }

    return ( result );
} // end nextToARobot ( )

/**
   nextToABeeper - Test if there is any beeper current world slot.
   @return true , if there is any beeper at the same slot;
           false, otherwise
 */
bool nextToABeeper ( )
{
    bool result = false;

    ref_world v_world = world_now;
    ref_robot v_robot = robot_now;

    if ( v_world != NULL &&
         v_robot != NULL &&
         checkRobotStatus ( ) )
    {
       result = has_BEEPERS ( v_robot->avenue, v_robot->street ) > 0;
    }

    return ( result );
} // end nextToABeeper ( )

/**
   nextToABpx - Test if there is a box at current world slot.
   @return true , if there is any box at the same slot;
           false, otherwise
 */
bool nextToABox ( )
{
    bool result = false;
    int  k = 0;
    int  c;

    ref_world v_world = world_now;
    ref_robot v_robot = robot_now;

    if ( v_world != NULL &&
         v_robot != NULL &&
         checkRobotStatus ( ) )
    {
       do
       {
           k = k + 1;
           c = v_world->data [ v_robot->street-1 ][ v_robot->avenue-1 ][ k ];
       }
       while ( k+1 < v_world->depth &&
               ! ( 'a' <= c && c <= 'z') );

       result = ( 'a' <= c && c <= 'z' );
    }

    return ( result );
} // end nextToABox ( )

/**
   pickBeeper - Pick a beeper at current world slot and keep it.
 */
void pickBeeper ( )
{
    int  x;

    ref_world v_world = world_now;
    ref_robot v_robot = robot_now;

    if ( v_world != NULL &&
         v_robot != NULL &&
         nextToABeeper( ) )
    {
         x = has_BEEPERS ( v_robot->avenue, v_robot->street );
         if ( x <= 0 )
         {
            show_Error ( "ERROR: No beeper." );
         }
         else
         {
            remove_World ( v_robot->avenue, v_robot->street, BEEPER );
            v_robot->beepers = v_robot->beepers + 1;
            debug_Robot ( );
         }
    }
} // end pickBeeper ( )

/**
   putBeeper - Put a beeper at current world slot.
 */
void putBeeper ( )
{
    int  x;

    ref_world v_world = world_now;
    ref_robot v_robot = robot_now;

    if ( v_world != NULL &&
         v_robot != NULL )
    {
         if ( v_robot->beepers <= 0 )
         {
            show_Error ( "ERROR: No beeper." );
         }
         else
         {
            x = has_slot ( v_robot->avenue, v_robot->street );
            if ( x < 0 )
            {
               show_Error ( "ERROR: No slot free." );
            }
            else
            {
               v_robot->beepers = v_robot->beepers - 1;
               set_World ( v_robot->avenue, v_robot->street, '1' );
               debug_Robot ( );
            }
         }
    }
} // end putBeeper ( )

/**
   pickBeeperFromBox - Pick a beeper from box at current world slot and keep it.
 */
void pickBeeperFromBox ( )
{
    ref_world v_world = world_now;
    ref_robot v_robot = robot_now;

    if ( v_world != NULL &&
         v_robot != NULL &&
         nextToABox( ) )
    {
        if ( isEmptyBox( ) )
        {
           show_Error ( "ERROR: Empty box." );
        }
        else
        {
           if ( checkBoxStatus( ) == CLOSED )
           {
              show_Error ( "ERROR: Box closed." );
           }
           else
           {
              v_robot->beepers = v_robot->beepers + pullBeeperFromBox( );
              debug_Robot ( );
           }
        }
    }
} // end pickBeeperFromBox ( )

/**
   putBeeperInBox - Push a beeper into a box at current world slot.
 */
void putBeeperInBox ( )
{
    ref_world v_world = world_now;
    ref_robot v_robot = robot_now;

    if ( v_world != NULL &&
         v_robot != NULL )
    {
         if ( v_robot->beepers <= 0 )
         {
            show_Error ( "ERROR: No beeper." );
         }
         else
         {
            if ( beepersInBox( ) + 1 >= 9 )
            {
               show_Error ( "ERROR: Box is full." );
            }
            else
            {
               if ( checkBoxStatus( ) == CLOSED )
               {
                  show_Error ( "ERROR: Box is closed." );
               }
               else
               {
                  v_robot->beepers = v_robot->beepers - 1;
                  pushBeeperIntoBox ( );
                  debug_Robot ( );
               }
            }
         }
    }
} // end putBeeperInBox ( )

/**
   xAvenue - Retrieve robot location on avenue number.
   @return avenue number.
 */
int xAvenue ( )
{
 // define local
    int avenue = -1;

    ref_robot v_robot = robot_now;

    if ( v_robot != NULL )
    {
       avenue = v_robot->avenue;
    } // end if

    return ( avenue );
} // end xAvenue ( )

/**
   yStreet - Retrieve robot location at street number.
   @return street number.
 */
int yStreet ( )
{
 // define local
    int street = -1;

    ref_robot v_robot = robot_now;

    if ( v_robot != NULL )
    {
       street = v_robot->street;
    } // end if

    return ( street );
} // end yStreet ( )

/**
   areYouHere - Test robot location.
   @return true, if is the right location;
           false, otherwise.
   @param avenue    - slot (x)
   @param street    - slot (y)
 */
bool areYouHere ( int avenue, int street )
{
 // define local
    bool result = false;

    ref_robot v_robot = robot_now;

    if ( v_robot != NULL )
    {
       result = ( avenue == v_robot->avenue ) && ( street == v_robot->street );
    } // end if

    return ( result );
} // end areYouHere ( )

#endif