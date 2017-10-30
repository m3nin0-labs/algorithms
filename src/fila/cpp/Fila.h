#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

/*
  A fila trabalha de forma um pouco diferente da Pilha
  Porém esta é um pouco mais complexa, ela trabalha utilizando o sistema FIFO (First in First Out)
  Onde o primeiro a entrar é o primeiro a sair

  Como análogia pode se levar em consideração a fila de um banco, onde sai primeiro aquele que chegar primeiro
*/


class Fila{

public:

/*
  A estratégia de implementação utilizada aqui ira utilizar
  os atributos primeiro, que faz referência ao primeiro elemento da fila (O mais antigo)
  ultimo, que diz sobre o último elemento da lista (O mais novo)
  e o total de itens dentro da fila;
*/

  // Atríbutos
  int primeiro;
  int ultimo;
  int total;
  int valores[5];

  // Construtor
  Fila();

  // Métodos
  void insert(int e);
  int remove();
  bool isEmpty();
  bool isFull();
};

Fila::Fila(){
  primeiro = 0;
  ultimo = 0;
  total = 0;
}

void Fila::insert(int e){
  // Realizando verificação da quantidade de elementos na fila
  if(isFull()){
    throw(std::string("A fila está cheia"));
  }
  valores[ultimo] = e;
  ultimo = (ultimo + 1) % (sizeof(valores) / sizeof(int));
  total++;
}

int Fila::remove(){
  if(isEmpty()){
    throw(std::string("A fila está vazia"));
  }
  // A remoção sempre será do primeiro elemento
  int temp = valores[primeiro];
  // A linha abaixo é executada para gerar o ciclo da fila
  // ou seja, quando chegar ao tamanho máximo retornar para 0
  primeiro = (primeiro + 1) % (sizeof(valores) / sizeof(int));
  total--;
  return temp;
}

bool Fila::isFull(){
  return total == sizeof(valores) / sizeof(int);
}

bool Fila::isEmpty(){
  return total == 0;
}

#endif
