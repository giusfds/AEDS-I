/*
 Guia0114 - v0.0. - 04 / 08 / 2023
 Author: Giuseppe Sena Cordeiro - 801779
 Para compilar em uma janela de comandos (terminal):
 
 No Linux : g++ -o Guia0111 ./Guia0111.cpp
 No Windows: g++ -o Guia0111 Guia0111.cpp
 Para executar em uma janela de comandos (terminal):
 No Linux : ./Guia0111
 No Windows: Guia0111
*/
// lista de dependencias
#include "karel.hpp" // comentário: necessario estar na mesma pasta
// --------------------------- definicoes de metodos
/**
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar paredes no mundo

// colocar um marcador no mundo
world->set ( 6, 6, BEEPER );
world->set ( 6, 3, BEEPER );
world->set ( 3, 3, BEEPER );
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

 /**
 doTask - Relacao de acoes para qualquer robo executar.
 */
 void doTask ( )
 {
 // executar

 turnLeft();
 move();
 move();
 move();
 move();
 move(); //6,1
 turnRight();
 move();
 move();
 move();
 move();
 move();
 pickBeeper();// pega o 6,6 ->
 turnRight();
 move();
 move();
 move();
 pickBeeper();// pega o 6,3 (v)
 turnRight();
 move();
 move();
 move();
 pickBeeper();// pega o 3,3 (<-)
 move();
 move();
 turnRight();//(^)
 move();
 move();
 move();
 putBeeper();
 turnLeft();//(<-)
 turnLeft();//(v)
 move();
 putBeeper();
 move();
 putBeeper();
 move();
 move();
 move();
 turnLeft();//(->)

 // passar primeiro no 6,6 6,3 3,3

 // encerrar
 turnOff ( ); // desligar-se
 } // end doTask ( )

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
 decorateWorld ( "Guia0113_.txt" );
 world->show ( );
// preparar o ambiente para uso
 world->reset ( ); // limpar configuracoes
 world->read ( "Guia0113_.txt" );// ler configuracao atual para o ambiente
 world->show ( ); // mostrar a configuracao atual
 set_Speed ( 3 ); // definir velocidade padrao
// criar robo
 MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
 robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
 robot->doTask ( );
// encerrar operacoes no ambiente
 world->close ( );
// encerrar programa
 getchar ( );
 return ( 0 );
} // end main ( )
// ------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.1 04/08 esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
 0.2 01. ( OK ) teste da tarefa
 0.3 01. ( OK ) teste da tarefa parcial
 0.4 0.1 ( OK ) teste do apanhar marcador
 0.5 01. ( OK ) teste do colocar marcador
 0.6 01. ( OK ) teste da repeticao do movimento
 0.7 01. ( OK ) teste com marcador na posicao (4,4)
     02. ( OK ) teste sem marcador na posicao (4,4)
 0.8 01. ( OK ) teste com a quantidade de marcadores
 0.9 01. ( OK ) teste com outra forma de repeticao
 1.0 01. ( OK ) teste com outra forma de alternativa
*/

