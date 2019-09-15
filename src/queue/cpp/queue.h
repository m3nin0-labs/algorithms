#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

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

class StringQueueArrayDynamic {

};

class StringQueueLinkedList {

};

#endif
