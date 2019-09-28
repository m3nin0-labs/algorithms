/**
 * Script de utilização da classe de fila que verifica os comportamentos das
 * classes implementadas quando o não há elementos na fila
*/

#include <iostream>
#include "queue.h"

using namespace std;

int main(void) {
    StringQueueArray * stringQueueArray = new StringQueueArray();

    // Causando uma exceção tentando remover um elemento da fila vazia
    stringQueueArray->dequeue();
}
