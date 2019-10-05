#include <iostream>
#include "linkedlist.h"

using namespace std;

/**
 * Função para visualizar o conteúdo dos nós de uma lista ligada
 * Aqui o conceito de recursão foi facilmente aplicado já que, as listas
 * ligadas por natureza representam problemas recursivos, onde cada nó
 * pode ser entendido como uma lista completa
*/
void viewLinkedList(IntegerNode * node) {
    if (node != NULL) {
        cout << node->content << endl;
        viewLinkedList(node->next);
    }
}

int main(void) {
    // Criando listas encadeadas
    IntegerNode * node = new IntegerNode(1, new IntegerNode(2, new IntegerNode(3)));
    
    viewLinkedList(node);
}
