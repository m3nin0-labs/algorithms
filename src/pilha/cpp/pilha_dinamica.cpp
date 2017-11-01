#include <iostream>
#include "PilhaDinam.h"

using namespace std;

int
main(void){
  Pilha * pilha = new Pilha();

  for (int i = 1; i <= 200; i++){
    pilha -> push(i);
  }
  cout << "Verificando o elemento do topo " << pilha -> top() << endl;
  cout << "Desempilhando elemento: " << pilha -> pop() << endl;
  cout << "O elemento do topo agora é: " << pilha -> top() << endl;
}
