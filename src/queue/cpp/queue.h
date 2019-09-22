#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <cstring>

using namespace std;

class StringQueueArray {
public:
    
    StringQueueArray();

    string dequeue();
    void enqueue(string item);

    bool isFull();
    bool isEmpty();

private:
    int size;
    int startIndex, endIndex;
    string itens[10];

    void checkIsFull();
    void checkIsEmpty();
};

StringQueueArray::StringQueueArray() {
    this->endIndex = 0;
    this->startIndex = 0;
}

string StringQueueArray::dequeue() {
    this->checkIsEmpty();

    // Salvando o primeiro elemento em uma variável temporária
    // (Variável removida na operação)
    string temp = this->itens[this->startIndex];

    this->startIndex = (this->startIndex + 1) % (
        sizeof(this->itens) / sizeof(string)
    );
    (this->size)--;

    return temp;
}

void StringQueueArray::enqueue(string item) {
    this->checkIsFull();
    // O índice 'último' (endIndex) não representa o final do array,
    // mas sim o local do array que representa o 'final da fila'
    this->itens[this->endIndex] = item;

    // Atualizando o valor final
    // É importante lembrar que, a estratégia de atualização
    // dos índices não considera apenas 0 à limite, mas sim que
    // um 'circulo' pode ir sendo feito para que, os espaços ocupados
    // sejam dinamicamente preenchidos dentro do array
    this->endIndex = (this->endIndex + 1) % (
        sizeof(this->itens) / sizeof(string)
    );
    (this->size)++;
}

bool StringQueueArray::isFull() {
    return this->size == sizeof(this->itens) / sizeof(string);
}

bool StringQueueArray::isEmpty() {
    return this->size == 0;
}

void StringQueueArray::checkIsFull() {
    if (this->isFull())
        throw "Queue is Full!";
}

void StringQueueArray::checkIsEmpty() {
    if (this->isEmpty())
        throw "Queue is Empty!";
}

/**
 * Implementação de uma fila feita através da alocação dinâmica de arrays.
 * A ideia da implementação foi apenas criar uma forma de apresentar como a manipulação de
 * ponteiros pode facilitar diversos processos.
 */
class StringQueueArrayDynamic {
public:
    StringQueueArrayDynamic();
    StringQueueArrayDynamic(int size);
    StringQueueArrayDynamic(int size, int factor);

    bool isFull();
    bool isEmpty();

    string dequeue();
    void enqueue(string item);

    int getSize();
private:
    void upSize();
    void checkIsEmpty();

    string * itens;
    int size, factor;
    int startIndex = 0, endIndex = 0;
};

StringQueueArrayDynamic::StringQueueArrayDynamic() {
    this->size = 10;
    this->factor = 2;
    this->itens = new string[this->size];
}

StringQueueArrayDynamic::StringQueueArrayDynamic(int size) {
    this->size = size;
    this->factor = 2;
    this->itens = new string[size];
}

StringQueueArrayDynamic::StringQueueArrayDynamic(int size, int factor) {
    this->size = size;
    this->factor = factor;
    this->itens = new string[size];
}

int StringQueueArrayDynamic::getSize() {
    return this->size;
}

/**
 * Método para mudança no tamanho do array alocado para o armazenamento dos dados
 * na fila 
 */
void StringQueueArrayDynamic::upSize() {
    // Atualiza o tamanho total do array 
    this->size *= this->factor;

    // Criando novo array
    string * tempArray = new string[this->size];

    // Copiando todos os componentes para os novos endereços da memória
    string *pToOld = this->itens;
    string *pToNew = tempArray;

    for(int i = 0; i < (this->size / this->factor); i++) {
        // Navega pelos endereços de memória e faz as cópias de cada posição
        *(pToNew + i) = *(pToOld + i);
    }

    delete [] this->itens;
    this->itens = tempArray;
}

bool StringQueueArrayDynamic::isFull() {
    return this->size == this->endIndex;
}

bool StringQueueArrayDynamic::isEmpty() {
    return this->endIndex == 0;
}

void StringQueueArrayDynamic::checkIsEmpty() {
    if (this->isEmpty())
        throw "Queue is Empty!";
}

void StringQueueArrayDynamic::enqueue(string item) {
    if (this->isFull()) {
        // Caso esteja cheio, é feito uma atualização
        // no tamanho do array
        this->upSize();
    } 
    this->itens[this->endIndex] = item;
    (this->endIndex)++;
}

string StringQueueArrayDynamic::dequeue() {
    this->checkIsEmpty();

    (this->startIndex)++;
    return this->itens[this->startIndex--];
}

class StringQueueLinkedList {

};

#endif
