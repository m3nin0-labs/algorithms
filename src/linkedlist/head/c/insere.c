#include <stdio.h>
#include <stdlib.h>

// Exemplo de função para inserir células dentro da lista encadeada com cabeca

// Definindo estrutura da célula
// O typedef é para facilitar o processo
typedef struct lmp{
  int conteudo;
  struct lmp * proximo;
}CELULA;

// Inserir não basta, aqui será também demostrado a exibição
// Apenas para confirmar de que a inserção foi feita
void
exibe(CELULA * cabeca){
  // Criando ponteiro que aponte para o tipo da célula
  CELULA * p;
  p = cabeca -> proximo;

  while(p != NULL){
    printf(" %d ", p -> conteudo);
    p = p -> proximo;
  }
  printf("\n");
}

// Função para inserir elementos na lista encadeada
void
insere(CELULA * cabeca, int conteudo){

  // Criando nova célula
  CELULA * nova = malloc(sizeof(CELULA));

  nova -> conteudo = conteudo;
  nova -> proximo = cabeca -> proximo;

  cabeca -> proximo = nova;
}

int main(void){

  CELULA * cabeca = malloc(sizeof(cabeca));

  for (int i = 0; i < 10; i++){
    insere(cabeca, i * 5);
  }
  exibe(cabeca);
}
