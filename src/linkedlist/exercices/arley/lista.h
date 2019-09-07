#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

class No{
public:
  int conteudo;
  No * proximo;

  // Construtores
  No();
  No(int conteudo);
};

No::No(){}

No::No(int conteudo){
  this -> conteudo = conteudo;
}

class Lista{
public:

  No * cabeca;

  // Construtores
  Lista();

  void inserir(int conteudo);
  void exibe();
  void getUltimo();
  void cout();
  int coutR(No * p, int n);
  int sumR(No * p, int value);
  void height(int n);
  void depth(int n);
};

Lista::Lista(){
  this -> cabeca = new No();
}

void Lista::inserir(int conteudo){

  No * novo = new No(conteudo);

  novo -> proximo = cabeca -> proximo;
  novo -> conteudo = conteudo;

  cabeca -> proximo = novo;
}

void Lista::exibe(){
  No * p = cabeca -> proximo;

  while (p != NULL){
    std::cout << p -> conteudo << " ";
    p = p -> proximo;
  }
  std:: cout << std::endl;
}


void Lista::getUltimo(){
  No * p = cabeca -> proximo;

  while (p -> proximo != NULL){
    p = p -> proximo;
  }

  std::cout << p -> conteudo << std::endl;
}

void Lista::cout(){
  No * p = cabeca -> proximo;

  int cont = 0;

  while (p -> proximo != NULL){
    p = p -> proximo;
    cont++;
  }
  std::cout << "A lista tem: " << cont + 1 << " nós" << std::endl;
}

int Lista::coutR(No * p, int n){
  if (p -> proximo == NULL){
    return n + 1;
  } else {
    return coutR(p -> proximo, n + 1);
  }
}

int Lista::sumR(No * p, int value){
  if (p -> proximo == NULL){
    return p -> conteudo;
  } else {
    return p -> conteudo + sumR(p -> proximo, value);
  }
}

void Lista::height(int n){
  No * p = cabeca -> proximo;

  int cont = 0;
  int altura = 0;

  while (p != NULL){
    if (cont >= n){
      altura++;
    } else {
      cont ++;
    }
    p = p -> proximo;
  }
  std::cout << "A altura do nó escolhido é: " << altura << std::endl;
}

void Lista::depth(int n){
  No * p = cabeca -> proximo;

  int cont = 0;
  int profundidade = 0;

  while (p != NULL){
    if (cont < n){
      std::cout << cont << std::endl;
      profundidade++;
      cont++;
    }
    p = p -> proximo;
  }
  std::cout << "A profundidade do nó escolhido é: " << profundidade << std::endl;
}

#endif
