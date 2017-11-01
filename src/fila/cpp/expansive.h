#ifndef EXPANSIVE_H_INCLUDED
#define EXPANSIVE_H_INCLUDED

class Fila{
public:

  // Atributos
  int inicio;
  int total;
  int arr[10];

  // Construtor
  Fila();

  // Métodos
  void insere(int n);
  void remove();
  bool isEmpty();
  bool isFull(); // Neste caso a forma de implementação da fila permite a utilização desmétodo
  void clean();
  void view();
};

Fila::Fila(){
  inicio = 0;
  total = 0;
}

bool
Fila::isFull(){
  return total == (sizeof(arr) / sizeof(int));
}

bool
Fila::isEmpty(){
  return (total == 0);
}

void
Fila::insere(int n){
  if (!isFull()){
    int fim = (inicio + total) % (sizeof(arr) / sizeof(int));
    arr[fim] = n;
    total++;
  } else
    std::cout << "A fila está cheia!" << std::endl;
}

void Fila::view(){
  if (!isEmpty()){
    for (int i = 0; i < total; i++){
      std::cout << arr[i] << std::endl;
    }
  }
}

#endif
