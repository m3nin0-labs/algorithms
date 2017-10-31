#include <iostream>
#include "cell.h"

using namespace std;

int
main(void){

  Celula * cabeca = new Celula();
  Celula * listaDois = new Celula();

  string nomes[] = {"Maria", "Joana", "Freire", "Josefa"};
  string sobreNomes[] = {"Pereira", "Albuquerque", "Jojo", "Carvalho"};

  for (int i = 0; i < sizeof(nomes) / sizeof(string); i++){
    cabeca -> insert(nomes[i]);
    listaDois -> insert(sobreNomes[i]);
  }

  cout << "Todos os elementos da lista" << endl;
  cabeca -> view();

  cout << "\n\nRemovendo apenas o primeiro elemento" << endl;
  cabeca -> removeOne();
  cabeca -> view();

  cout << "\n\nConcatenando com uma outra lista, conteúdo da segunda lista abaixo" << endl;
  listaDois -> view();

  cabeca -> concat(listaDois);
  cout << "\n\nElementos concatenados" << endl;

  cabeca -> view();

  return 0;
}
