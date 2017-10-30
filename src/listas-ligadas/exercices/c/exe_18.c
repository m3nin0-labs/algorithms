/*
  Escreva uma função que aplique a função free a todas as células de uma lista
  encadeada. Estamos supondo, é claro, que cada célula da lista foi originalmente
  alocada por malloc
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
  int content;
  struct cel * proximo;
}CELULA;

void
viewer(CELULA * celula){
  CELULA * p = celula -> proximo;

  while(p != NULL){
    printf(" %d ", p -> content);
    p = p -> proximo;
  }
  printf("\n");
}

void
insert(CELULA * celula, int content){
  CELULA * nova = malloc(sizeof(CELULA));

  nova -> content = content; nova -> proximo = celula -> proximo;
  celula -> proximo = nova;
}

void
freedomForAll(CELULA * celula){

  CELULA * p = celula -> proximo;
  CELULA * lixo = malloc(sizeof(CELULA));

  while (p != NULL) {
    celula -> proximo = lixo -> proximo; p = lixo -> proximo;
    free(lixo);
  }
}

void
main(void){
  CELULA * cabeca = malloc(sizeof(CELULA));

  for (int i = 1; i < 15; i++){
    insert(cabeca, i * 5);
  }
  printf("Elementos presentes na lista\n");
  viewer(cabeca);

  printf("Os elementos foram excluidos\n");
  freedomForAll(cabeca);
  viewer(cabeca);
}
