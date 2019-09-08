/**
 * Script que apresenta exemplo de remoção de nós em uma lista ligada simples 
 * 
 * Da mesma forma como o exemplo apresentado no `insert.cpp`, as funções
 * aqui empregadas poderam ser métodos da classe de lista ligada, porém
 * buscou-se fazer de uma forma a apresentar os efeitos de utilização
 * de ponteiros (Referências) dentro do código, o que é muito útil em várias outras
 * linguagens.
*/

#include <iostream>
#include "linkedlist.h"

/**
 * Função remove o nó posterior imediato ao passado como entrada
*/
void removeAfterNode(StringNode * listElement) {
    StringNode * tempNode = listElement->next;

    listElement->next=tempNode->next;
}

void viewLinkedList(StringNode * list) {
    if (list != NULL) {
        cout << list->content << endl;
        return viewLinkedList(list->next);
    }
}

int main(void) {
    StringNode * nodeOne = new StringNode(
        "Node one", new StringNode("Node two", new StringNode("Node Three"))
    );
 
    cout << "Before remove" << endl;
    viewLinkedList(nodeOne);

    cout << "After remove" << endl;
    removeAfterNode(nodeOne);
    viewLinkedList(nodeOne);
}
