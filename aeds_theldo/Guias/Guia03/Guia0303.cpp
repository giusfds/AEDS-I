/*
Guia0303 - v0.0. - 08 / 08 / 2023
Author: Giuseppe Sena Cordeiro - 801779
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Guia0303 ./Guia0303.cpp
No Windows: g++ -o Guia0303 Guia0303.cpp
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0303
No Windows: Guia0303
*/

// lista de dependencias
#include "karel.hpp"
#include "io.hpp"

// --------------------------- definicoes de metodos

/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld(const char *fileName)
{
    // colocar paredes no mundo
    // world->set ( 4, 4, VWALL );
    // world->set ( 4, 4, HWALL );
    // colocar um marcador no mundo
    world->set(4, 4, BEEPER);
    // salvar a configuracao atual do mundo
    world->save(fileName);
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
    void turnRight()
    {
        // definir dado local
        int step = 0;
        // testar se o robo esta' ativo
        if (checkStatus())
        {
            // o agente que executar esse metodo
            // devera' virar tres vezes 'a esquerda
            for (step = 1; step <= 3; step = step + 1)
            {
                turnLeft();
            } // end for
        }     // end if
    }         // end turnRight ( )

    /**
    moveN - Metodo para mover certa quantidade de passos.
    @param steps - passos a serem dados.
    */
    void moveN(int steps)
    {
        // definir dado local
        int step = 0;
        // testar se a quantidade de passos e' maior que zero
        for (step = steps; step > 0; step = step - 1)
        {
            // dar um passo
            move();
        } // end if
    }     // end moveN( )

    /**
    countCommands - Funcao para contar comandos de arquivo.
    @return quantidade de comandos
    @param fileName - nome do arquivo
    */
    int countCommands(const char *fileName)
    {
        // definir dados
        int x = 0;
        int length = 0;
        std::ifstream archive(fileName);
        // repetir enquanto houver dados
        archive >> x; // tentar ler o primeiro
        while (!archive.eof() && x != 0)
        {
            // contar mais um comando
            length = length + 1;
            // tentar ler o proximo
            archive >> x;
        } // end while
        // fechar o arquivo
        archive.close();
        // retornar resultado
        return (length);
    } // end countCommands( )

    /**
    readCommands - Metodo para receber comandos de arquivo.
    @return grupo formado por todos os comandos
    @param filename - nome do arquivo
    */
    int readCommands(int commands[], const char *fileName)
    {
        // definir dados
        int x = 0;
        int action = 0;
        int length = 0;
        std::ifstream archive ( fileName );
        // obter a quantidade de comandos
        length = countCommands(fileName);
        // criar um armazenador para os comandos
        if (length < MAX_COMMANDS)
        {
            // repetir para a quantidade de comandos
            for (x = 0; x < length; x = x + 1)
            {
                // tentar ler a proxima linha
                archive >> action;
                // guardar um comando
                // na posicao (x) do armazenador
                commands[x] = action;
            } // end for
            // fechar o arquivo
            // INDISPENSAVEL para a gravacao
            archive.close();
        } // end for
        // retornar quantidade de comandos lidos
        return (length);
    } // end readCommands( )

}; // end class MyRobot

// --------------------------- acao principal

/**
Acao principal: executar a tarefa descrita acima.
*/
int main()
{
    // definir o contexto
    // criar o ambiente e decorar com objetos
    // OBS.: executar pelo menos uma vez,
    // antes de qualquer outra coisa
    // (depois de criado, podera' ser comentado)
    world->create(""); // criar o mundo
    decorateWorld("Guia0303.txt");
    world->show();
    // preparar o ambiente para uso
    world->reset();              // limpar configuracoes
    world->read("Guia0303.txt"); // ler configuracao atual para o ambiente
    world->show();               // mostrar a configuracao atual
    set_Speed(3);                // definir velocidade padrao
    // criar robo
    MyRobot *robot = new MyRobot();
    // posicionar robo no ambiente (situacao inicial):
    // posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
    robot->create(1, 1, EAST, 0, "Karel");
    // definir armazenador para comandos
    int comandos[MAX_COMMANDS];
    // executar tarefa
    char message[80];
    int quantidade = robot->readCommands(comandos, "Tarefa0301.txt");
    message[0] = '\0'; // limpar a mensagem
    sprintf(message, "Commands = %d", quantidade);
    show_Text(message);
    // encerrar operacoes no ambiente
    world->close();
    // encerrar programa
    getchar();
    return (0);
} // end main ( )

// ------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/