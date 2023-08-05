/* 
   Guia0111 - v0.0.1 - 03 / 08 / 2023 
   Author: Giuseppe Sena Cordeiro - 801779
 
   Para compilar em uma janela de comandos (terminal): 
    
   No Linux      :   g++ -o Guia0101  ./Guia0101.cpp 
   No Windows:   g++ -o Guia0101    Guia0101.cpp 
 
   Para executar em uma janela de comandos (terminal): 
 
   No Linux      :   ./Guia0101 
   No Windows:     Guia0101 
 
 */ 
// lista de dependencias 
#include "karel.hpp"  // comentário: necessario estar na mesma pasta 
 
// --------------------------- definicoes de metodos 
 
/** 
   decorateWorld - Metodo para preparar o cenario. 
   @param fileName - nome do arquivo para guardar a descricao. 
 */ 
void decorateWorld ( const char* fileName ) 
{ 
  //aqui e onde coloca os muros


 world->save( fileName ); 
} // decorateWorld ( ) 
 

 
/** 
   Classe para definir robo particular (MyRobot), 
   a partir do modelo generico (Robot) 
 
   Nota: Todas as definicoes irao valer para qualquer outro robo 
    criado a partir dessa nova descricao de modelo. 
 */ 
class MyRobot : public Robot 
{ 
  public: 
 
     /** 
       turnRight - Procedimento para virar 'a direita. 
     */ 
     void turnRight ( ) 
     { 
      // testar se o robo esta' ativo 
         if ( checkStatus ( ) ) 
         { 
          // o agente que executar esse metodo 
          // devera' virar tres vezes 'a esquerda 
             turnLeft ( ); 
             turnLeft ( ); 
             turnLeft ( ); 
         } // end if 
     } // end turnRight ( ) 
 
}; // end class MyRobot 
 
 
// --------------------------- acao principal 
 
/** 
    Acao principal: executar a tarefa descrita acima. 
*/ 
 
int main ( ) 
{ 
 // definir o contexto 
 
 // criar o ambiente e decorar com objetos 
 // OBS.: executar pelo menos uma vez, 
 //            antes de qualquer outra coisa 
 //            (depois de criado, podera' ser comentado) 
    world->create  ( "" );      // criar o mundo 
    decorateWorld ( "Guia0111.txt" ); 
    world->show    ( ); 
 
 // preparar o ambiente para uso 
    world->reset   ( );      // limpar configuracoes 
    world->read    ( "Guia0111.txt" );// ler configuracao atual para o ambiente 
    world->show  ( );      // mostrar a configuracao atual 
 
    set_Speed  ( 3 );      // definir velocidade padrao 
 
 
 
 
 
 
 
 // criar robo 
    MyRobot *robot = new MyRobot( ); 
 
 // posicionar robo no ambiente (situacao inicial): 
 // posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido ) 
    robot->create  ( 1, 1, EAST, 3, "Karel" ); 
 
 // executar tarefa 

    robot->move( ); //  2,1         3,3 6,3 6,6
    robot->move( ); //  3,1
    robot->turnLeft( ); // sobe
    robot->move( ); // 3,2
    robot->move( ); // 3,3
    robot->putBeeper( ); //largui um beeber
    robot->move( ); //4,3
    robot->move( ); //5,3
    robot->move( ); //6,3
    robot->putBeeper( ); //largui um beeber
    robot->turnRight( ); // direita
    robot->move( ); //6,4
    robot->move( ); //6,5
    robot->move( ); //6,6
    robot->putBeeper( ); //largui um beeber
    //volta para 1,1
    robot->turnRight( ); // direita
    robot->move( );
    robot->move( );
    robot->move( );
    robot->move( );
    robot->move( );
    robot->turnRight( ); // direita
    robot->move( );
    robot->move( );
    robot->move( );
    robot->move( );
    robot->move( );
    robot->turnRight( );
    robot->turnRight( );

    
   
 
 // encerrar operacoes no ambiente 
    world->close ( ); 
 
//  encerrar programa 
    getchar ( ); 
    return ( 0 ); 
 
} // end main ( ) 
 
// ------------------------------------------- testes 
 
/* 
---------------------------------------------- documentacao complementar 
 
---------------------------------------------- notas / observacoes / comentarios 
 
 nao entendi, se era para fazer o karel chegar no ponto (1)
 
---------------------------------------------- previsao de testes 
 
 
 
---------------------------------------------- historico 
 
Versao Data  Modificacao 
  0.1 03/08  esboco 
 
 ---------------------------------------------- testes 
 
Versao Teste 
  0.1 01. (  ok  )  identificacao de programa 
 
*/