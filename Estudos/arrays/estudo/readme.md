# array
## pre requisitos
[função](https://github.com/giusfds/aeds/tree/main/estudos/funcao)
### o que e um array
Arrays são conjuntos de elementos que podem ser classificados como inteiros (int), decimais (floats e doubles) ou até mesmo caracteres, conhecidos como ["strings"](https://github.com/giusfds/aeds/tree/main/estudos/string). A sintaxe é a seguinte:
```c
int array[7];
``` 
A declaração é sempre a mesma: temos o tipo da variável, seu nome, e entre colchetes, a quantidade de elementos que queremos utilizar para definir o tamanho do vetor, que neste caso é 7.

### Como ler e acessar o conteúdo de arrays?
A leitura e acesso ao conteúdo de arrays é bastante simples:
```c
int array[7];

int a = array[2];
``` 
É importante lembrar que os índices de um array começam em 0, não em 1. No início, isso pode causar alguma confusão, pois não se aplica somente em C, mas em muitas linguagens.

Uma maneira mais eficaz de acessar os elementos de um array é usando um loop for:
```c
int n = 7;
int array[n];

for (int i = 0; i < n ; i++) {
  array[i] = i;
}
``` 
dessa forma, estamos passando da posicao "0" onde pertence ao 'i' e indo ate um numero menor do que 7, sendo ele o 6.

### Passando arrays para funções

Ao passar um array para uma função, na verdade estamos passando um ponteiro para ele. Portanto, se modificarmos o conteúdo do array dentro da função, a modificação será refletida no array original.

```c
#include<stdio.h>

void modificar_array(int array[]) {
  array[5] = 53;
}

int main(void) {
  int n = 10;
  int array[n];

  for (int i = 0; i < n ; i++) {
    array[i] = i;
  }
  
  modificar_array(array);
  printf("%d\n", array[5]);
  
  return 0;
}
``` 
por mais que nao usamos um apontador (*) para o vetor, ele altera a sua origem, ou seja, o seu valor principal.

## Matrizes
Uma matriz é um vetor composto por outros vetores, ou seja, um vetor de duas dimensões. A declaração e acesso aos elementos de uma matriz podem ser feitos da seguinte forma:
```c
// Declarando uma matriz
tipo nomeDaVariavel[numeroDeLinhas][numeroDeColunas];

// Acessando um elemento de uma matriz
nomeDaVariavel[indiceLinha][indiceColuna];
```
Segue um exemplo prático de preenchimento automático de uma matriz:

```c
int numero_linhas = 3;
int numero_colunas = 3;
int matriz[numero_linhas][numero_colunas];

for (int i=0; i<3; i++ ) {
  for (int j=0; j<3; j++ ) {
     matriz[i][j] = i * j;
  }
}

``` 
Ao passar uma matriz para uma função, é importante especificar o número de linhas e colunas. Por exemplo:
```c
void preencher_array(int m, int n, int arr[][n])
{
    // ...
}

```

Também é possível utilizar alocação de memória dinâmica para criar matrizes:

```c

int **a=(int **)malloc(m*sizeof(int));
    
for(i=0;i<n;i++){
    a[i]=(int *)malloc(n*sizeof(int));
}

```
> Para mais informações sobre alocação de memória dinâmica, [ clique aqui.](https://github.com/giusfds/aeds/tree/main/estudos/ponteiro/estudos/Ponteiros%20e%20alocação%20de%20memória/alocacao%20dinamica)

### Créditos
Todos os resumos se baseiam nesse [repositório](https://github.com/Programando-o-Mundo/Microfundamentos-AEDs/blob/main/AEDs1/Parte2_Conceitos_avancados/2-Estruturas-de-dados-nao-Primitivas.md). É importante lembrar que este resumo é uma adaptação do conteúdo presente no repositório do "Programando o Mundo".