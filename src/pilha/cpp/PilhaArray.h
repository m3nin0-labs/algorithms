#ifndef PILHA_H_INCLUDED
#define PILHa_H_INCLUDED

// Todas as operações na pilha estão relacionadas ao topo
// Ultimo que entra, primeiro que sai (LIFO)

// Duas estratégias de implementação de uma pilha

/*
1° - Utilizando vetor (Estático)
Nesta estratégia, o método isFull() faz todo sentido
*/

/*
2° - Utilizando alocação dinâmica (Arquivo PilhaDinam.h)
Aqui o isFull() não faz sentido
*/

using namespace std;

class Pilha{
public:

  int elementos[5];
  int topo; // Indice que indica qual foi o último elemento armazenado

  // Construtor
  Pilha();

  // Métodos
  void push(int e); // Colocar no topo (Empilha)
  int pop(); // Tirar do topo (Desempilha)
  int top(); // Retorna que está no topo, sem desempilha
  bool isEmpty(); // Verifica se está vázio ou não
  bool isFull(); // Verifica se a pilha atingiu a capacidade máxima
};

Pilha::Pilha(){
  this -> topo = -1; // Posição invalida do vetor
}

void Pilha::push(int e){
  if (isFull()){
    throw(string("Erro! A pilha está cheia"));
  } else {
    topo++;
    elementos[topo] = e;
  }
}

int Pilha::pop(){
  int e = elementos[topo];
  topo--;
  return e;
}

int Pilha::top(){
  return elementos[topo];
}

bool Pilha::isEmpty(){
  return (topo == -1);
}

bool Pilha::isFull(){
  return (topo == sizeof(elementos) / sizeof(int));
}

#endif
