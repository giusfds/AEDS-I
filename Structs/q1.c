#include <stdio.h>
#include <string.h>

struct endereco {
  int cep;
  char rua[30];
  int numero;
};

struct cliente {
  int telefone;
  char nome[80];
  struct endereco endereco;
};

void FillCliente(struct cliente *clientePtr) {
  // (*clientePtr).telefone = 13213;
  printf("qual seu nome praga");
  scanf("%s", clientePtr->nome);
  printf("qual seu numero de telefione");
  scanf("%d", &clientePtr->telefone);
  printf("qual e o seu CEP");
  scanf("%d", &clientePtr->endereco.cep);
  printf("qual e o seu rua");
  scanf("%s", clientePtr->endereco.rua);
  printf("qual e o seu numero");
  scanf("%d", &clientePtr->endereco.numero);
}

void PrintCliente(struct cliente cliente){

  printf("o nome do cliente e: %s\n", cliente.nome);
  printf("o telefone do cliente e: %d\n", cliente.telefone);
  printf("o telefone do cliente e: %s\n", cliente.endereco.rua);
  printf("o telefone do cliente e: %d\n", cliente.endereco.numero);
  printf("o telefone do cliente e: %d\n", cliente.endereco.cep);
  
}

int main(void) {

  struct cliente cliente1;
  struct cliente cliente2;

  FillCliente(&cliente1);
  FillCliente(&cliente2);
  PrintCliente(cliente1);
  PrintCliente(cliente2);

  return 0;
}