# Funções

### O que é uma função?
- Na programação em C, o compilador lê linha por linha, interpretando e traduzindo os comandos para linguagem de máquina. No entanto, tudo o que colocamos no nosso código primeiro é interpretado na função main. Ou seja, todas as informações que você verá tiveram origem na main (mesmo que ela mesma chame uma função para realizar as ações).
- As funções podem se apresentar em duas formas possíveis: aquelas que retornam algo, chamadas de funções na programação, e aquelas que não retornam, como o void, chamadas de procedimentos.

### Para que usar funções?
- A função em si não tem uma utilidade correta; ela é utilizada para tornar o código mais legível para outras pessoas, sejam elas estudantes ou colegas de trabalho.

### Como usar uma função?
- Funções são coisas simples de se usar, basta entender o básico delas. Como foi dito anteriormente, funções são operações chamadas pela main, contendo outras expressões e cálculos, sendo de livre ajuda para qualquer pessoa que queira usá-las.

Veja um exemplo abaixo:
```c
#include <stdio.h>

void pritar_helloworld(){
    printf("Hello World");
}

int main(){
    pritar_helloworld();
}
```
- Nesta função destacada, temos que a main chama a função imprimir_hello_world para que a ação dentro dela seja executada. Assim, o compilador entende que ele terá que fazer um desvio de caminho para realizar o procedimento.

### Tá, mas função é só isso?
- De uma forma mais reduzida, sim. No entanto, podemos passar valores como parâmetros.

1. O que é um parâmetro?
- O parâmetro está localizado entre parênteses. No exemplo acima, eu não passei nada para ela. A sintaxe de um parâmetro é:
```c
void pritar_helloworld ( parametro, basta escolher o tipo )
```
Veja um exemplo abaixo usando parâmetros para calcular a média de três números:
```c
#include <stdio.h>

float media(int a, int b, int c){
    float media=0;
    media = a + b + c;
    return media;
}

int main(){
    int n1=0, n2=0, n3=0;
    float media=0;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    media = media(n1, n2, n3);
    printf("%.2f",media);
}
```
nesse caso, nao e muito util, porque esse exemplo e algo simples.
- Neste caso, não é muito útil, porque este exemplo é algo simples. Neste caso, podemos ver que a função retornou a média, ou seja, ela teve um retorno do tipo float, por isso a função é definida desta forma, iniciando a frase como float.

### Mas o que passar como parâmetro?
> Essa é para você, Caio :3

- Uma função ou procedimento que calcule algo dentro dela precisa obrigatoriamente de algo que você vai passar da main para ela, ou seja, valores que podemos usar dentro da função.

Veja um exemplo abaixo:
```c
#include <stdio.h>
#include <stdbool.h>

bool isLetter(char c){
    if ('A'<=c && c<='Z') OR ('a'<=c && c<='z'){
        return true;
    }
    return false;
}

int main (){
    char letra;
    scanf("%c", &letra);
    if (isLetter(letra)){
        printf("o valor digitado e uma letra");
    }else{
        printf("o valor digitado nao e uma letra");
    }
}
```
- Neste caso, podemos ver que a função verifica se o caractere passado para ela é realmente uma letra, seja ela maiúscula ou minúscula, e está retornando um valor lógico, true ou false. Assim, o if será executado a partir do retorno da função.

### Pode ter mais de um tipo de retorno?
> Pré-requisitos: [ponteiros básicos](https://github.com/giusfds/aeds/blob/main/estudos/ponteiro/estudos/Introdução%20a%20ponteiros/readme.md)
- A resposta curta e grossa é que sim, você pode ter dois tipos de retorno, porém é de uma forma mais complicada, pois teremos que usar ponteiros para alterar o valor da variável em si. Aqui está um exemplo simples de uma função com mais de um retorno:
```c
#include<stdio.h>

void trocar(int* a, int* c){
  int tmp = *a;
  *a = *c;
  *c = tmp;
}

int main(void) {
  int a = 5;
  int c = 3;
  
  trocar(&a,&c);
  
  printf("a = %d, c = %d\n", a,c);
  return 0;
}
```
- Neste caso, podemos notar que o procedimento está alterando os valores da variável. Isso ocorre porque estamos passando o local onde a variável foi armazenada, ou seja, o procedimento altera os valores na main, sem termos que alterá-los através de uma variável temporária.


