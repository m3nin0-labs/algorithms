#include <iostream>
#include "expansive.h"
#include "automatic.h"
#include "circular.h"

using namespace std;

void
exeUm(){
  Fila * fila =  new Fila();

  for (int i = 0; i <= 15; i++){
    fila -> insere(i * 2);
  }

  cout << "---------------------------" << endl;

  fila -> view();
}

void
exeDois(){
  // A fila inicial da classe tem apenas 5 elementos
  FilaAutomatica * fila = new FilaAutomatica();

  for (int i = 0; i < 10; i++){
    fila -> insere(i);
  }

  fila -> exibir();
}

void
exeTres(){
  Circular * circular = new Circular();

  for (int i = 0; i <= 10; i++)
    circular -> insert(i);

  circular -> view();
  cout << "Perceba que os valores foram sobrescritos\n";
}

int
main(void){

  exeTres();
  return 0;
}
