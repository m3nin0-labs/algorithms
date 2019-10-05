/**
 * Script que apresenta um exemplo de como inserir um novo nó em uma
 * posição específica da lista ligada.
 * 
 * As funções aqui apresentadas poderiam ser métodos das classes criadas
 * porém optou-se por manter fora para possibilitar o entendimento do que as 
 * mudanças feitas em pointeiros podem causar na execução do código.
*/

#include <iostream>
#include "linkedlist.h"

void insertNodeInLinkedList(int position, StringNode * list, StringNode * newNode) {
    if (list != NULL) {
        if (position == 0) {
                newNode->next = list->next;
                list->next = newNode;
        }
        insertNodeInLinkedList(position - 1, list->next, newNode);
    }    
}

void viewLinkedList(StringNode * list) {
    if (list != NULL) {
        cout << list->content << endl;
        return viewLinkedList(list->next);
    }
}

int main(void) {
    StringNode * nodeOne = new StringNode("Bom dia");
    StringNode * nodeTwo = new StringNode("Boa tarde");
    StringNode * nodeThree = new StringNode("Boa noite");

    // Vinculando dois nós
    nodeOne->next = nodeThree;
    viewLinkedList(nodeOne);

    // Inserindo um novo nó na posição entre "Bom dia" e "Boa noite"
    insertNodeInLinkedList(0, nodeOne, nodeTwo);
    viewLinkedList(nodeOne);
}
