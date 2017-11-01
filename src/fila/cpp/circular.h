/*
  Classe criada para o exercício 3 - Fila circular
*/

// Mais explicações no arquivo Fila.h

#ifndef CIRCULAR_H_INCLUDED
#define CIRCULAR_H_INCLUDED

class Circular{
public:
  int primeiro; // Referência para o primeiro elemento da lista
  int ultimo; // Referência para o último elemento da lista
  int total;
  int * nums; // Ponteiro para a classe de array inteiros

  Circular();

  void insert(int e);
  void remove();
  void view();
  bool isEmpty();
  bool isFull();
};

Circular::Circular(){
  this -> primeiro = 0; // Coloca o primeiro na posição 0
  this -> ultimo = 0;
  this -> total = 0;
  this -> nums = new int[10];
}

bool Circular::isEmpty(){
  return total == 0;
}

bool Circular::isFull(){
  return total == sizeof(nums);
}

void Circular::insert(int n){
  if (isFull()){
    std::cout << "A fila está cheia\n";
  }
  nums[ultimo] = n;
  // Através desta notação, gerei a lista circular
  ultimo = (ultimo + 1) % sizeof(nums);
  total++;
}

void Circular::remove(){
  if (!isEmpty()){
    total--;
    primeiro = (primeiro - 1) % sizeof(nums);
  }
}

void Circular::view(){
  for (int i = 0; i < sizeof(nums); i++){
    std::cout << nums[i] << "\t";
  }
  std::cout << "\n";
}

#endif
