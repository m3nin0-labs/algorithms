#include <iostream>
#include "queue.h"

int main(void) {
    StringQueueArray * stringQueueArray = new StringQueueArray();

    stringQueueArray->enqueue("O primeiro que sai");
    stringQueueArray->enqueue("O segundo que sai");

    cout << stringQueueArray->dequeue() << endl;
    cout << stringQueueArray->dequeue() << endl;

    // Uma exceção (Fila vazia)
    // cout << stringQueueArray->dequeue() << endl;

}
