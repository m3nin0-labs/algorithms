#ifndef PILHADINAM_H_INCLUDED
#define PILHADINAM_H_INCLUDED

// Esta implementação utiliza lista encadeada
// desta forma não faz sentido utilizar isFull();

// Classe para os nós da lista encadeada
class No{
public:
  int conteudo;
  No * proximo;

  No();

};
No::No(){
}

// ----------------------
class Pilha{
public:

  // Construtor
  Pilha();

  // Métodos
  bool isEmpty(); // Implementado
  // Empilha
  void push(int n); // Implementado
  // Desempilha
  int pop(); //
  void clean(); // Implementado
  int top(); // Implementado

  // Getters and setters
  No * getTopo();

private:
  No * topo;
};

Pilha::Pilha(){
  this -> topo = NULL;
}

void Pilha::push(int n){
  No * novo = new No();

  novo -> conteudo = n;
  novo -> proximo = this -> topo;
  this -> topo = novo;

  /*
    No * novo = new No();
    novo -> conteudo = n;
    novo -> proximo = cabeca -> proximo;
    cabeca -> proximo = novo;

    Veja que neste código, ao fazer cabeca -> proximo = novo;
    estou realizando a movimentação para a direta.
    Na pilha com lista encadeada, faço:

    novo -> proximo = this -> topo;
    this -> topo = novo

    isso faz eu manter o topo sendo o primeiro
  */
}

int Pilha::pop(){
  int temp = topo -> conteudo;
  topo = topo -> proximo;

  return temp;
}

No * Pilha::getTopo(){
  return this -> topo;
}

bool Pilha::isEmpty(){
  return this -> topo == NULL;
}

void Pilha::clean(){
  this -> topo == NULL;
}

int Pilha::top(){
  if (!isEmpty())
    return this -> topo -> conteudo;
  else
    return -1;
}

#endif
