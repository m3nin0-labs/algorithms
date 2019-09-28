/**
 * Script de utilização da classe de fila que verifica os comportamentos das
 * classes implementadas quando o limite máximo da fila foi atingido.
*/

#include <iostream>
#include "queue.h"

using namespace std;

int main(void) {
    StringQueueArray * stringQueueArray = new StringQueueArray();

    for(int i = 0; i <= 10; i++) {
        stringQueueArray->enqueue("Elemento " + to_string(i));
    }
}
