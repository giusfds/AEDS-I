# Introdução

## O que é um ponteiro?
Um ponteiro, também conhecido como apontador, é uma variável como qualquer outra. Ele é um espaço de memória que guarda o endereço de outra área de memória, ou seja, é uma variável que aponta para outra. Sua sintaxe não é muito complexa, como podemos ver abaixo:
```c
int* ptr;
```
## Como posso entender ponteiros de uma forma mais fácil?
Uma maneira simples de pensar em ponteiros é como "o endereço de uma casa, e a casa pode mudar, mas o endereço é sempre o mesmo". Transpondo isso para a linguagem de programação, podemos analisar que a variável possui um ponteiro apontando para ela. Mesmo se você mudar de "casa", o ponteiro continuará apontando para você.
- Como assim?
O ponteiro é apenas o endereço de algum lugar. Ele não sabe o que tem naquele lugar, apenas sabe que o lugar é aquele. Portanto, se você alterar o valor naquele endereço, o ponteiro continuará apontando para o mesmo lugar. Se você pedir para ele fornecer o que está naquele endereço, ele te dará o valor modificado.

## Como o ponteiro altera o valor da variável?
Neste tópico, é mais fácil explicar com um exemplo, como o abaixo:

```c
int x, y, *p;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
--x;
(*p) += x;
printf("x=%d  y=%d *p=%d", x, y, *p);
```
- O que está acontecendo neste código?
Podemos observar que temos duas variáveis normais e uma do tipo ponteiro (*p). Ao atribuirmos o ponteiro à variável "y", tudo o que modificarmos no ponteiro afetará diretamente a variável à qual ele aponta, como mencionado anteriormente, a "y".
- Como resolver esse ponto?
Bem, ao realizar os cálculos corretamente, podemos analisar que a saída no console será:
```c
x=3 y=4 *p=4
```
Outro exemplo simples que podemos analisar é:
```c
int a=5, b=12, c;
int *p;
int *q;
p = &a;
q = &b;
c = *p + *q;
printf("c = %d", c);
```
O comando acima não tem muitos segredos, pois não realiza operações complexas com a memória. Ele simplesmente atribui dois ponteiros às variáveis já inicializadas e, no final, realiza a operação de adição entre elas, resultando na saída no console:
```c
c = 17
```
Em resumo, ponteiros não são muito complicados. Basta entender que eles apontam para algum lugar - seja uma variável, um texto que você usa como parâmetro em uma função, ou qualquer outra coisa que você deseje!

