/*
  MÍNIMO. Escreva uma função que encontre uma célula de conteúdo mínimo. Faça duas versões: uma iterativa
  e outra recursiva.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct lmp{
  int conteudo;
  struct lmp * proximo;
} CELULA;

void
min(CELULA * cabeca){
  CELULA *p = cabeca -> proximo;

  int minimo = p -> conteudo;

  while (p != NULL){
    if (minimo > p -> conteudo)
      minimo = p -> conteudo;
    p = p -> proximo;
  }
  printf("O menor valor é: %d\n", minimo);
}

void
exibe(CELULA * cabeca){
  CELULA * p = cabeca -> proximo;
  while (p != NULL){
    printf(" %d ", p -> conteudo);
    p = p -> proximo;
  }
  printf("\n");
}

void
insere(int conteudo, CELULA * cabeca){

  CELULA * nova = malloc(sizeof(CELULA));

  nova -> conteudo = conteudo;
  nova -> proximo = cabeca -> proximo;

  cabeca -> proximo = nova;
}

void
main(void){

  CELULA * cabeca = malloc(sizeof(CELULA));

  for (int i = 1; i < 10; i++){
    insere(i * 2, cabeca);
  }

  printf("Exibindo todos os elementos presente nas células da lista\n");
  exibe(cabeca);
  min(cabeca);
}
