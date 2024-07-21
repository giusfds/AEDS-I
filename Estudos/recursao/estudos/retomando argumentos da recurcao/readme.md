# Retornando argumentos de funções recursivas

### Pré-requisito
>[Função](https://github.com/giusfds/aeds/tree/main/estudos/funcao/estudos)
>[Recursão](https://github.com/giusfds/aeds/tree/main/estudos/recursao/estudos/o%20que%20e%20recursao)

## Como é feita a soma recursiva?
Supondo que você tenha um array de tamanho 5 e queira somá-lo de forma iterativa, ficaria assim:
```c
#include <stdio.h>

int main() {
  int array[] = {5, 8, 9, 12, 8};
  int soma = 0;

  for (int i = 0; i < 5; i++){
    soma += array[i];
  }
    
  printf("%d\n", soma);

  return 0;
}
```
Nesse caso, estamos realizando a soma de forma iterativa usando um laço de repetição, onde a operação realizada é **soma += array[i]**. O resultado final é sempre acrescentado em **soma** até que **i** seja menor que o valor pré-determinado, que, no caso, é 5. Onde i representa o número atual da posição do **array**, e **soma +=** itera até que i seja menor que 5, resultando na soma de todas as posições do array.

Para fazer a soma de forma recursiva, é importante ter em mente a sintaxe do **for**, pois nos baseamos nele para realizar o processo. A mesma está descrita abaixo:

```c
for (inicialização; condição de parada; incremento/decremento) {
    // ...
}
```

A soma realizada acima pode ser feita de forma recursiva, como mostrado abaixo:

```c
#include <stdio.h>

int soma_rec(int arr[], int n, int i){

}

int somar(int arr[], int n){
  int i=0;
  return soma_rec(arr, n, i);
}

int main() {

  int n = 5;
  int array[ ] = {5, 8, 9, 12, 8};
    //      ^ nao tem um numero dentro, pois ele ja esta iniciado com os numeros dentro das chaves

  int soma = somar(array, n);
    
  printf("%d\n", soma);

  return 0;
}
```

Neste código, criamos duas funções para realizar esse processo: uma é o **somar**, que é semelhante ao contador do **for**, e a outra é a nossa recursão.

Vamos dar uma olhada na função ```soma_rec``` e analisar o que há de diferente dela em relação à forma iterativa. Na função recursiva, passamos como parâmetros o **array** (que possui os números presentes dentro dele),**n**(que é o tamanho do array, já que o mesmo não possui um número no parênteses) e **i** (que é o nosso contador para evitar um loop infinito). Dentro da função ```soma_rec```, ela terá que ser chamada novamente, já que é uma recursão e só vai parar quando nosso objeto de parada for verdadeiro. Isto ocorre também no "for", para que haja nosso objeto de parada, precisamos fazer um **if** para que ele saiba a hora de parar.

Vamos analisar o código abaixo:
```c
int soma_rec(int arr[], int n, int i){
  int soma = 0;
  
  if (i < n) {

  }
  
  return soma;
}
```
Podemos ver que iniciamos uma variável com o nome **soma**, que irá armazenar todos os valores presentes na conta. Após colocar um **if** no lugar, podemos ver que ele irá acontecer até **i** ser maior que **n**, que nesse caso, ocorrerá 5 vezes, pois em toda linguagem de programação, o array começa no 0.
Seguindo um pouco mais adiante, podemos ver que:
```c
int soma_rec(int arr[], int n, int i){
  int soma=0;
  if (i<n)
  {
    soma+=arr[i];
    soma+=soma_rec(arr, n, ++i);
  }
  return soma;
}
```
Teremos que realizar a soma do array na posição atual dele, porém no próximo passo, vamos chamar a função novamente, porém incrementando o **i**, para que o mesmo não fique em um loop infinito. Quando a condição do "if" não for mais verdadeira, ele irá parar a recursão, assim começará a desempilhar os blocos.

**OBS**: Dentro dos parâmetros da função recursiva, lembre-se de que ```A ORDEM DOS PARÂMETROS IMPORTA SIM```, e ao incrementar **i**, ```UTILIZE ++i EM VEZ DE i++```, isso é chamado de pré/pós incremento/decremento. Quando você utiliza o pós decremento "i++", você só incrementa na próxima operação, ou seja, a função que você chamou recebe **i**, mas quando a função retorna, o **i** recebe **i + 1**. Na ordem dos parâmetros, ```i TEM QUE SER o último parâmetro passado```, já que caso seja passado primeiro, ele irá incrementar primeiro o valor de **i** e depois fazer o resto.

- Como assim, desempilhar blocos?

Com a função chamando a si mesma, até que o valor do if seja falso, serão criados vários "blocos" de funções. A função se chama a si mesma, criando uma "escada" de funções. Sei que é estranho pensar assim, mas prometo que fará sentido depois (eu acho). Assim que **i** for maior que **n**, ele começará a retornar o resultado da última conta, que em nosso caso, seria ```0 + 8```, já que a variável soma é iniciada como 0 e estamos trabalhando com o último número do array. Assim, começamos na penúltima chamada, onde a soma que está em "8", ocorrerá a soma do ```8 + 12```, que é o penúltimo número do array, e assim por diante.

Para ficar mais claro, a soma do array ocorre de trás para frente, ou seja, do último valor para o primeiro. Uma maneira fácil de entender isso é escrever um código que conte de 1 a 5 de forma recursiva, como mostrado abaixo:

```c
#include <stdio.h>

void contar(int n) {
    if (n > 0) {
        contar(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int inicio = 1;
    int fim = 5;

    printf("Contando de %d a %d de forma recursiva:\n", inicio, fim);
    contar(fim);
    
    return 0;
}
```
O que aparecerá no console após a execução desse comando é:
```c
Contando de 1 a 5 de forma recursiva:
1 2 3 4 5

```
Acredito que assim seja uma boa maneira de compreender uma função recursiva e como ela é executada. No entanto, caso ainda haja dúvidas, aconselho dar uma olhada no link abaixo. Lá, há algumas tabelas e foi de onde obtive a base para este resumo. Espero ter ajudado.




### Créditos
Todos os resumos se baseiam nesse [repositório](https://github.com/Programando-o-Mundo/Microfundamentos-AEDs/blob/main/AEDs1/Parte2_Conceitos_avancados/2-Estruturas-de-dados-nao-Primitivas.md). É importante lembrar que este resumo é uma adaptação do conteúdo presente no repositório do "Programando o Mundo".