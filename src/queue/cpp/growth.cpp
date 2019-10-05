#include <iostream>
#include "queue.h"

using namespace std;

int main(void) {
    StringQueueArrayDynamic * queueDynamic = new StringQueueArrayDynamic(2, 2);

    cout << "Inserindo dois elementos e verificando o tamanho" << endl;

    queueDynamic->enqueue("Texto um");
    queueDynamic->enqueue("Texto dois");
    cout << "Tamanho atual da fila: " << queueDynamic->getSize() << endl;

    cout << "Inserindo um elemento e verificando se o tamanho duplicou" << endl;

    queueDynamic->enqueue("Texto três");
    cout << "Tamanho atual da fila: " << queueDynamic->getSize() << endl;
};
