/*
  Escreva uma função que concatene duas listas ligadas
  (isto é, "amarre" a segunda no fim da primeira)
*/

#include <stdio.h>
#include <stdlib.h>

struct cel{
  int conteudo;
  struct cel * proximo;
}; typedef struct cel CELULA;

void
exibe(CELULA * lista){

  CELULA * p = lista -> proximo;

  while(p != NULL){
    printf(" %d ", p -> conteudo);
    p = p -> proximo;
  }
  printf("\n");
}

void
insert(CELULA * lista, int conteudo){
  CELULA * nova = malloc(sizeof(CELULA));

  nova -> conteudo = conteudo; nova -> proximo = lista -> proximo;
  lista -> proximo = nova;
}

void
concat(CELULA * lista_1, CELULA * lista_2){
  CELULA * p = lista_1 -> proximo;

  while (p -> proximo != NULL){
    p = p -> proximo;
  }
  p -> proximo = lista_2 -> proximo;
}

void
main(void){

  CELULA * cabeca_1 = malloc(sizeof(CELULA));
  CELULA * cabeca_2 = malloc(sizeof(CELULA));

  for (int i = 1; i < 15; i++){
    insert(cabeca_1, i * 2);
    insert(cabeca_2, i * 3);
  }

  printf("LISTA 1: \n");
  exibe(cabeca_1);
  printf("LISTA 2: \n");
  exibe(cabeca_2);

  printf("CONCATENAÇÂO: \n");
  concat(cabeca_1, cabeca_2);
  exibe(cabeca_1);

}
