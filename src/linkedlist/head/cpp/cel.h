#ifndef CEL_H_INCLUDED
#define CEL_H_INCLUDED

class Celula{

public:

  // Atributos
  int conteudo;
  Celula * proximo;

  // Construtores
  Celula();
  Celula(int conteudo);
  Celula(Celula * cabeca, int conteudo);

  // Métodos
  void exibe();
  void exclui();
  void insere(int conteudo);
};

Celula::Celula(){
  this -> proximo = NULL;
}

Celula::Celula(int conteudo){
  this -> conteudo = conteudo;
  this -> proximo = NULL;
}

Celula::Celula(Celula * cabeca, int conteudo){
  this -> conteudo = conteudo;
  this -> proximo = cabeca -> proximo;
}

void
Celula::exibe(){
  Celula * p = new Celula();

  p -> proximo = this -> proximo;

  while(p != NULL){
    std::cout << p -> conteudo << std::endl;
    p = p -> proximo;
  }
}

void
Celula::exclui(){
  Celula * lixo = new Celula();

  lixo = this -> proximo;

  this -> proximo = lixo -> proximo;

  free(lixo);
}

void
Celula::insere(int conteudo){
  Celula * p = new Celula();

  p -> conteudo = conteudo;
  p -> proximo = this -> proximo;

  this -> proximo = p;
}

#endif
