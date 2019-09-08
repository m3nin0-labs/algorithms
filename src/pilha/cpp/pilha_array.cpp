#include <iostream>
#include "PilhaArray.h"

using namespace std;

int main(void){

  // Definindo o novo objeto de pilha, este deve ser um ponteiro
  Pilha * pilha = new Pilha();

  // Empilhando elementos
  pilha -> push(5);
  pilha -> push(4);
  pilha -> push(3);
  pilha -> push(2);
  pilha -> push(1);

  cout << pilha -> isFull() << "\n";

  // Desempilhando elementos
  while (!pilha -> isEmpty()){
    cout << "Elemento do topo: " << pilha -> top() << endl;
    int elemento = pilha -> pop();
    cout << elemento << "\n";
  }

  return 0;
}
