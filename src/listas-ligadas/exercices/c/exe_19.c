/*
  Escreva uma função que inverta a ordem das células de uma lista encadeada
  (a primeira passa a ser a última, a segunda passa a ser a penúltima, etc).
  Faça isso sem criar novas células, apenas altera os ponteiros.
*/

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
    printf(" %d ", p -> conteudo);
    p = p -> proximo;
  }
  printf("\n");
}

void
insert(CELULA * lista, int conteudo){
  CELULA * nova = malloc(sizeof(CELULA));

  nova -> conteudo = conteudo;
  nova -> proximo = lista -> proximo;

  lista -> proximo = nova;
}

void
inverte(CELULA * lista){
  CELULA * atual, * proximo, * temp;

  atual = lista;
  proximo = lista -> proximo;

  while (proximo != NULL){
    temp = proximo -> proximo;

    // Realizando a inversão entre as três listas referênciadas
    proximo -> proximo = atual;
    atual = proximo;
    proximo = temp;
  }
  lista -> proximo -> proximo = NULL;
  lista -> proximo = atual;
}

void
main(void){

  CELULA * lista = malloc(sizeof(CELULA));
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++){
    insert(lista, arr[i]);
  }

  printf("Exibindo antes da inversão\n");
  exibe(lista);
  inverte(lista);
  printf("Exibindo após a inversão\n");
  exibe(lista);
}
