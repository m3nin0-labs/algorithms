#include <iostream>
#include "cel.h"

using namespace std;

int
main(void){

  Celula * cabeca = new Celula();
  for (int i = 1; i < 10; i++){
    cabeca -> insere(i * 3);
  }

  cabeca -> exibe();
  // Excluindo
  cabeca -> exclui();
  cout << "Excluindo o primeiro elemento" << endl;

  cabeca -> exibe();
}
