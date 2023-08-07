/*
 Guia_0204 - v0.0. - 07 / 08 / 2023
 Author: Giuseppe Sena Cordeiro - 801779
 Para compilar em uma janela de comandos (terminal):
 
 No Linux : g++ -o Guia0204 ./Guia0204.cpp
 No Windows: g++ -o Guia0204 Guia0204.cpp
 Para executar em uma janela de comandos (terminal):
 
 No Linux : ./Guia0204
 No Windows: Guia0204
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar paredes no mundo
 world->set ( 4, 4, VWALL );
 world->set ( 4, 4, HWALL );
// colocar um marcador no mundo
 world->set ( 4, 4, BEEPER );
// salvar a configuracao atual do mundo
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
 // definir dado local
 int step = 0;
 // testar se o robo esta' ativo
 if ( checkStatus ( ) )
 {
 // o agente que executar esse metodo
 // devera' virar tres vezes 'a esquerda
 for ( step = 1; step <= 3; step = step + 1 )
 {
 turnLeft( );
 } // end for
 } // end if
 } // end turnRight ( )

 /**
 moveN - Metodo para mover certa quantidade de passos.
 @param steps - passos a serem dados.
 */
 void moveN( int steps )
 {
 // definir dado local
 int step = 0;
 // testar se a quantidade de passos e' maior que zero
 for ( step = steps; step > 0; step = step - 1 )
 {
 // dar um passo
 move( );
 } // end if
 } // end moveN( )

 /**
 doPartialTask - Metodo para especificar parte de uma tarefa.
 */
 void doPartialTask( )
 {
 // especificar acoes dessa parte da tarefa
 moveN( 3 );
 turnLeft( );
 } // end doPartialTask( )

/**
 * pickBeepers - Metodo para coletar marcadores.
 */
 void pickBeepers( )
 {
 // repetir (com teste no inicio)
 // enquanto houver marcador proximo
 while ( nextToABeeper( ) )
 {
 // coletar um marcador
 pickBeeper ( );
 } // end while
 } // end pickBeepers( )

  /**
 doSquare - Metodo para especificar outro percurso.
 */
 void doSquare( )
 {
 // definir dado local
 int step = 1;
 // especificar acoes da tarefa
 while ( step <= 4 )
 {
 // realizar uma parte da tarefa
 moveN(3);
 pickBeepers( );
 turnRight( );
 // tentar passar 'a proxima
 step = step + 1;
 } // end while
 turnOff ( );
 } // end doSquare( )

 /**
 doTask - Relacao de acoes para o robo executar.
 */
 void doTask( )
 {
 // definir dado local
 int step = 4;
 
 // especificar acoes da tarefa
 while ( step > 0 )
 {
 // realizar uma parte da tarefa
 doPartialTask( );
 // tentar passar 'a proxima
 step = step - 1;
 } // end while
 // encerrar
 turnOff ( );
 } // end doTask( )

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
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
 world->create ( "" ); // criar o mundo
 decorateWorld ( "Guia0204.txt" );
 world->show ( );
// preparar o ambiente para uso
 world->reset ( ); // limpar configuracoes
 world->read ( "Guia0204.txt" );// ler configuracao atual para o ambiente
 world->show ( ); // mostrar a configuracao atual
 set_Speed ( 3 ); // definir velocidade padrao
// criar robo
 MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
 robot->create ( 1, 1, NORTH, 0, "Karel" );
// executar tarefa
 robot->doSquare ( );
// encerrar operacoes no ambiente
 world->close ( );
// encerrar programa
 getchar ( );
 return ( 0 );
} // end main ( )
// -------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.1 07/08 esboco
--------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
 0.2 01. ( OK ) teste da repeticao para virar 'a direita
 0.3 01. ( OK ) teste da repeticao para percorrer um quadrado

*/