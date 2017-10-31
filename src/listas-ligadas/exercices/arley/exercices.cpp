#include <iostream>
#include "lista.h"

using namespace std;

int main(void){

  Lista * lista = new Lista();

  for (int i = 1; i <= 5; i ++){
    lista -> inserir(i * 2);
  }

  lista -> exibe();
  lista -> getUltimo(); // Exercício 1
  lista -> cout(); // Exercício 2.1

  // Exercício 2.2
  // Definindo cabeçalho
  // No * p = lista -> cabeca -> proximo;
  // int resp = lista -> coutR(p, 0);
  // cout << "A resposta das listas recursivas é:" << resp << endl;

  // Exercício 3
  // No * p = lista -> cabeca -> proximo;
  // int resp = lista -> sumR(p, 0);
  // cout << resp << endl;

  // Exercício 4
  // lista -> height(2);

  // Exercício 5
  lista -> depth(3);

  return 0;
}
