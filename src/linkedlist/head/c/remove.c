// Exemplo de remoção do primeiro nó da lista

#include <stdio.h>
#include <stdlib.h>

// definindo o formato da célula
typedef struct cel{
  int conteudo;
  struct cel * proximo;
}CELULA;

void
exibe(CELULA * cabeca){
  CELULA * p = cabeca -> proximo;

  while (p != NULL) {
    printf(" %d ", p -> conteudo);
    p = p -> proximo;
  }
  printf("\n");
}

void
insere(CELULA * cabeca, int conteudo){
  CELULA * nova = malloc(sizeof(CELULA));

  nova -> conteudo = conteudo;
  nova -> proximo = cabeca -> proximo;

  cabeca -> proximo = nova;
}

void
removeF(CELULA * cabeca){

  // Removendo apenas o primeiro elemento
  CELULA * lixo = malloc(sizeof(CELULA));
  lixo = cabeca -> proximo;

  cabeca -> proximo = lixo -> proximo;

  free(lixo);
}

void
main(void){

  CELULA * cabeca = malloc(sizeof(CELULA));

  for (int i = 0; i < 15; i++){
    insere(cabeca, i * 3);
  }
  exibe(cabeca);

  // Removendo o primeiro elemento
  removeF(cabeca);

  exibe(cabeca);
}
