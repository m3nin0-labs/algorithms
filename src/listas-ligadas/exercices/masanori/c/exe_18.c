/*
  Escreva uma função que aplique a função free a todas as células de uma lista
  encadeada. Estamos supondo, é claro, que cada célula da lista foi originalmente
  alocada por malloc
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct aux{
  int ctn;
  struct aux * prox;
}No;

void
exibe(No * cabeca){
  No * p = cabeca -> prox;

  while (p != NULL){
    printf("%d\n", p -> ctn);
    p = p -> prox;
  }
}

void
insere(No * cabeca, int ctn){
  No * novo = malloc(sizeof(No));
  novo -> prox = cabeca -> prox;
  novo -> ctn = ctn;

  cabeca -> prox = novo;
}

void
freedom4all(No * cabeca){
  No * p = cabeca -> prox;
  No * trash = malloc(sizeof(No));

  while (p != NULL){
    trash = cabeca -> prox;
    cabeca -> prox = trash -> prox;
    free(trash);
    p = cabeca -> prox;
  }
}

void
main(){
  No * cabeca = malloc(sizeof(No));
  for (int i = 1; i <= 5; i ++)
    insere(cabeca, i * 2);

  printf("Antes da liberdade: \n");
  exibe(cabeca);
  freedom4all(cabeca);
  printf("Depois da liberdade: \n");
  exibe(cabeca);
}
