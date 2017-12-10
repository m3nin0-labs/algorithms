/*
  Estrutura básica que será utilizada para a construção de uma árvore binária

  Para realizar a representação de uma árvore binária de maneira computacional
  deve-se unir nós.

  Assim necessitamos de uma estrutura de dados que nos permita fazer isso
  O que iremos fazer é criar um nó que tenha dois ponteiros (Para lado esquerdo do nó, e outro para lado direito)
  Neste nó também terá uma chave para guardar o registro (Dado).
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct aux{
  int key; // Valor a ser armazenado
  struct aux * esq, * dir; // Ponteiros para a esquerda e para a direita
}NO;

NO *
insere(NO * raiz, NO * no){
  if (raiz == NULL)
    return no;
  if (no -> key < raiz -> key)
    // Chamada recursiva, isso faz com que seja verificado os demais nós
    raiz -> esq = insere(raiz -> esq, no);
  else
    raiz -> dir = insere(raiz -> dir, no);
  return raiz;
}

// Função para criar novos nós
NO *
init(int key){
  NO * novo = malloc(sizeof(NO));
  novo -> esq = NULL;
  novo -> dir = NULL;
  novo -> key = key;
  return novo;
}

int
main(void){
  // Inicializando a árvore vazia
  NO * r = NULL;

  NO * no_1 = init(23);
  NO * no_2 = init(12);
  NO * no_3 = init(25);
  NO * no_4 = init(8);
  NO * no_5 = init(15);

  r = insere(r, no_1);
  r = insere(r, no_2);
  r = insere(r, no_3);
  r = insere(r, no_4);
  r = insere(r, no_5);

  printf("Raiz: Key: %i - Endereço: %p\n", r -> key, r);
  printf("Primeiro esquerda: Key %i - Endereço: %p\n", r -> esq -> key, r -> esq);
  printf("Primeiro direita: Key: %i - Endereço: %p\n", r -> dir -> key, r -> dir);

  printf("---------------------------------------\n");

  printf("Segundo esquerda: Key: %i - Endereço: %p\n", r -> esq -> esq -> key, r -> esq -> esq);

  // Comente o código acima para testar este
  // r = insere(r, no_1);
  // printf("%i\n", r -> key);
  // printf("Endereço direito antes de inserir elemento novo: %p\n", r -> dir);

  // r = insere(r, no_2);
  // printf("Endereço direito após inserir o novo elemento: %p\n", r -> dir);
  // printf("Valor alocado: %i\n", r -> dir -> key);
}
