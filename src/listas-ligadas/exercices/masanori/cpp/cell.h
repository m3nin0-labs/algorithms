#ifndef CELL_H_INCLUDED
#define CELL_H_INCLUDED

class Celula{

public:
  std::string conteudo;
  Celula * proximo;

  // Construtores
  Celula();
  Celula(std::string conteudo);

  // Métodos
  void insert(std::string conteudo);
  void removeOne();
  void removeAll();
  void view();
  void concat(Celula * lista);
};

Celula::Celula(){
  // Void
};

Celula::Celula(std::string conteudo){
  this -> conteudo = conteudo;
}

void Celula::insert(std::string conteudo){
  // Criando a nova célula
  Celula * celula = new Celula(conteudo);

  celula -> proximo = this -> proximo;
  this -> proximo = celula;
}

void Celula::removeOne(){
  Celula * trash = new Celula();

  trash = this -> proximo;
  this -> proximo = trash -> proximo;

  free(trash);
}

void Celula::removeAll(){
  Celula * temp = new Celula();
  Celula * trash = new Celula();

  temp = this;
  while (temp != NULL) {
    trash = this -> proximo;
    this -> proximo = trash -> proximo;
    free(trash);

    temp = this -> proximo;
  }
}

void Celula::view(){
  Celula * celula = this -> proximo;

  while (celula != NULL){
    std::cout << celula -> conteudo << std::endl;
    celula = celula -> proximo;
  }
}

void Celula::concat(Celula * lista){
  Celula * p = this -> proximo;

  while (p -> proximo != NULL){
    p = p -> proximo;
  }

  p -> proximo = lista -> proximo;
}
#endif
