#ifndef AUTOMATIC_H_INCLUDED
#define AUTOMATIC_H_INCLUDED

#include <cstring>

// Classe criada para resolver o exercício 3 da lista do Arley
class FilaAutomatica{
public:
  // Atributos
  int * arr = new int[5];
  int primeiro;
  int total;

  // Construtor
  FilaAutomatica();

  // Métodos
  void insere(int n);
  void remove();
  bool isFull();
  bool isEmpty();
  void exibir();
  void upSize();

};

FilaAutomatica::FilaAutomatica(){
  this -> primeiro = 0;
  this -> total = 0;
}

void FilaAutomatica::upSize(){
  std::cout << "A fila cresceu!" << std::endl;
  // Sempre irá duplicar
  size_t more = sizeof(arr) * 2;
  int * nArr = new int[more];

  memcpy(nArr, arr, more * sizeof(int));
  delete [] arr;
  arr = nArr;
}

bool FilaAutomatica::isEmpty(){
  return total == 0;
}

bool FilaAutomatica::isFull(){
  return total == sizeof(arr);
}

void FilaAutomatica::insere(int n){
  if (isFull())
    upSize();
  // O retorno desta operação para o último refere-se a posição de memória
  // onde o novo elemento será adicionado
  int ultimo = (primeiro + total) % sizeof(arr);
  arr[ultimo] = n;
  total++;
}

void FilaAutomatica::remove(){
  primeiro++;
  total--;
}

void FilaAutomatica::exibir(){
  for (int i = 0; i < sizeof(arr); i++){
    std::cout << arr[i] << std::endl;
  }
}

#endif
