# Recursão

### Pré-requisito
>[Função](https://github.com/giusfds/aeds/tree/main/estudos/funcao/estudos)

## O que é uma função recursiva?
Uma função recursiva é simplesmente uma função que chama a si mesma até que o objeto de parada retorne o seu valor final. Pense nisso como descer uma escada, para passar de um degrau para o próximo, você executa várias tarefas, que são os comandos na função. Antes de finalizar, você deve pisar em outro degrau, ou seja, realizar as mesmas atividades até chegar no final da escada, que neste ponto de vista é o seu objeto de parada. Falarei mais sobre isso adiante.

Quando falamos sobre operações recursivas e iterativas, é basicamente a mesma ideia de usar um for ou um while, porém em uma função que se chama a si mesma. É mais fácil mostrar na prática, como é demonstrado abaixo:
```c
#include<stdio.h>

void hello_world() {
  printf("Hello world!\n");
  hello_world();
}

int main() {
  hello_world();
  return 0;
}
```
No código acima, podemos observar que ele se tornará um loop infinito (espero que você saiba o que é um loop infinito...), porque na função **main** você chama a função **hello_world**, e dentro dela, executa um "hello world" e em seguida, ela é chamada novamente dentro dela mesma, resultando em um loop infinito. Isso é algo normal de acontecer quando se trata de recursão.
- Mas então, como podemos corrigir esse problema?
Analisando um código interativo, temos o "for" como exemplo:
```c
for (inicialização; condição de parada; incremento/decremento) {
    // ...
}
```
Podemos observar que ele possui uma condição de parada, ou seja, até onde esse laço de repetição acontecerá. Isso é o que falta na função recursiva, ou seja, onde ela irá parar para não continuar se repetindo indefinidamente.

## Condição de parada da recursão
Tendo em vista o "for", o mesmo possui uma condição de parada, como já mencionado anteriormente. Podemos usar isso para ter um maior controle na recursão. Ou seja, ao pedir para o usuário digitar o número **n**, o comando fará a função ser chamada "n" vezes.

```c
#include<stdio.h>

void hello_world_rec(void) {
  printf("Hello world!\n");
  hello_world_rec();
}

void hello_world(int n) {
  hello_world_rec();
}

int main(void) {

  int n = 0;
  scanf("%d", &n);
  hello_world(n);
  return 0;
}
```
Ter uma função que chama a nossa função recursiva é uma boa prática a ser considerada. Isso ajuda na interpretação de outras pessoas do código, facilitando qualquer alteração presente no mesmo. Dessa forma, elas precisariam trocar apenas na função que chama a recursão. É importante lembrar que em C não temos a sobrecarga de função, ou seja, não podemos ter duas funções com o mesmo nome. Por isso o "rec", de recursivo.

No entanto, isso não resolverá nosso problema. Agora vamos definir o nosso objeto de parada:
```c
#include<stdio.h>

void hello_world_rec(int i, int n) {
  
  if (i < n) {
    printf("Hello world!\n");
    hello_world_rec(++i,n);
  }
}

void hello_world(int n) {
  int i = 0;
  hello_world_rec(i, n);
}

int main(void) {

  int n = 0;
  scanf("%d", &n);
  hello_world(n);
  return 0;
}
```
Neste caso, a função **hello_world_rec** possui dois parâmetros. Agora, ela possui o "i" como se fosse o índice do nosso "for" e o "n", que ajuda no objeto de parada da função. Também podemos notar a presença de um **if**, onde este será nosso objeto de parada. Enquanto o parâmetro for verdadeiro, ele continuará chamando a função recursivamente. No entanto, podemos notar que o "i" está sendo incrementado em +1, para que esteja cada vez mais próximo de "n", tornando-se assim o objeto de parada.

Analisando a outra função **hello_world**, podemos notar que ela possui uma variável dentro dela, o "i", que foi iniciado com 0. Ao chamar a função **hello_world_rec**, passamos os dois valores como parâmetros e dentro da função de recursão, alteramos o "i" como se fosse o parâmetro de incremento/decremento do "for".


### Créditos
Todos os resumos se baseiam nesse [repositório](https://github.com/Programando-o-Mundo/Microfundamentos-AEDs/blob/main/AEDs1/Parte2_Conceitos_avancados/2-Estruturas-de-dados-nao-Primitivas.md). É importante lembrar que este resumo é uma adaptação do conteúdo presente no repositório do "Programando o Mundo".

