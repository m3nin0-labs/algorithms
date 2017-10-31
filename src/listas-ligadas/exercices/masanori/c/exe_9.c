/* Transforme vetores para listas */

#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
  int conteudo;
  struct cel * proximo;
}CELULA;

void
exibe(CELULA * lista){
  CELULA * p = lista -> proximo;

  while (p != NULL){
    printf("%d\n", p -> conteudo);
    p = p -> proximo;
  }
}

void
insere(CELULA * lista, int conteudo){
  CELULA * p = malloc(sizeof(CELULA));

  p -> conteudo = conteudo;
  p -> proximo = lista -> proximo; lista -> proximo = p;
}

void
vec2list(CELULA * cabeca, int vetor[], int size){
  for(int i = 0; i < size; i++)
    insere(cabeca, vetor[i] * 2);
  exibe(cabeca);
}

void
main(void){
  CELULA * cabeca = malloc(sizeof(CELULA));

  int arr[] = {
    10,
    20,
    30,
    40,
    50
  };
  vec2list(cabeca, arr, sizeof(arr) / sizeof(int));
}
