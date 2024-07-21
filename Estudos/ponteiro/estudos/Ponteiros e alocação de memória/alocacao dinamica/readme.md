# Alocação de Memória Dinâmica

- Qualquer coisa relacionada à alocação de memória dinâmica está presente na biblioteca stdlib.h.

```c
int* arr = (int*)malloc(sizeof(int)*10);
```

- Vamos traduzir o que está acontecendo acima. Primeiro, temos que fazer o cast (conversão) para o tipo de ponteiro que queremos. Neste caso, queremos o ponteiro de um inteiro (int*), uma vez que a função malloc não tem conhecimento do tipo de variável que queremos usar. Segundo, precisamos passar para o malloc a quantidade em bytes a ser alocada. Como estamos precisando de um array de inteiros, usamos a função sizeof para encontrar o tamanho em bytes de um inteiro. Por fim, multiplicamos pelo tamanho que gostaríamos que o nosso array fosse (neste caso, 10).
- Em resumo, estamos criando um array com espaço para dez inteiros, todos com valores não iniciados (lixo de memória).


### Resumo da Biblioteca stdlib.h (Principais Funções)
1. Função malloc:
Veja o exemplo abaixo:

- Serve para criar um array dinâmico, como já foi feito acima, onde cada número (int) fica contido dentro de um espaço de memória reservado para ele. Caso o array ultrapasse o valor de bytes alocados, o ponteiro retornará "null", ou seja, nada.
- A função também é utilizada de forma que em todos os tipos de variáveis ela é aceita: float, double e char. Basta mudar a sintaxe. Entretanto, essa função inicia cada espaço do "vetor" com lixo.

- Sintaxe:
```c
ptr = (int*) malloc(100 * sizeof(int));
```
- O cast (conversão) para o tipo de ponteiro que queremos, neste caso queremos o ponteiro de um inteiro (int*), pode ser utilizado para qualquer tipo de variável.

2. Função calloc
- É bem parecida com o malloc, realiza as mesmas funções, porém a inicialização do "vetor" sempre começa com o "0" e não com lixo.
- A sintaxe do calloc é um pouco diferente da do malloc realizada acima, já que ele precisa de mais parâmetros do que o malloc.
- Em relação ao calloc, a função é preferencialmente usada pra alocar caractere ou string.

- Sintaxe:
```c
ptr = (cast-type*)calloc(n, element-size);
```

3. Função free
- A função free() nada mais é do que você retirar esse uso de memória que você alocou, utilizando os processos acima, o que ajuda a diminuir o consumo da máquina.

- Sintaxe:
```c
free(ptr);
```
4. Função realloc
- A função serve para realocar mais memória para as outras funções já citadas acima, caso o espaço destinado a elas acabe.
- Ao usar a função realloc, os valores já setados irão continuar os mesmos, porém os novos irão ser iniciados com "lixo eletrônico", ou seja, vão iniciar com lixo que já estava ali guardado. Se o espaço realocado não for suficiente, o ponteiro voltará a retornar o valor "null".

- Sintaxe:
```c
ptr = realloc(ptr, newSize);
```

# ultil
> todas as informacoes retiradas para esse resumo, estao presentes nesse site

- [geeksforgeeks](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
