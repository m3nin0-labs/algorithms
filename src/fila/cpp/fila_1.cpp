#include <iostream>
#include "Fila.h"

using namespace std;

int main(void){

  Fila * fila = new Fila();

  // Inserindo elementos na lista
  fila -> insert(1);
  fila -> insert(2);
  fila -> insert(3);
  fila -> insert(4);
  fila -> insert(5);

  // Removendo os elementos da lista
  while (!fila -> isEmpty()){
    int temp = fila -> remove();
    cout << "Elemento removido: " << temp << endl;
  }

  return 0;
}
