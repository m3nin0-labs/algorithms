#include <stdio.h>
#include <stdlib.h>

/*
  A pilha é uma estrutura de dados com operações LIFO (Last In First Out)
  Ou seja, o último a entrar é o primeiro a sair.

  Todas as operações são realizadas no topo
*/

typedef struct lpm{
  int dados[10];
  int t; // Indica qual posição está livre (t - 1)
}Pilha;

int push(Pilha * pilha, int e);
void pop(Pilha * pilha);
int isFull(Pilha * pilha);
int isEmpty(Pilha * pilha);

int
push(Pilha * pilha, int e){
  // Empilha elementos
  if (isFull(pilha)){
    printf("A fila está cheia\n");
    return -1;
  }
  pilha -> dados[pilha -> t] = e;
  pilha -> t += 1;

  return 0;
}

void
pop(Pilha * pilha){
  // Desempilha elementos
  pilha -> t -= 1;
}

int
isFull(Pilha * pilha){
 // Verifica se está cheia
 return pilha -> t == sizeof(pilha -> dados) / sizeof(int);
}

int
isEmpty(Pilha * pilha){
  return pilha -> t == 0;
}

void
main(void){
  Pilha * pilha = malloc(sizeof(Pilha));

  for (int i = 0; i < 5; i++){
    push(pilha, i);
    printf(" %d ", pilha -> dados[i]);
  }
  printf("\nRemovendo os dados da pilha\n");
  pop(pilha); pop(pilha); pop(pilha);

  printf("Os elementos agora são: \n");
  for (int i = pilha -> t; i > 0; i--){
    printf(" %d ", pilha -> dados[i]);
  }
  printf("\n");
}
