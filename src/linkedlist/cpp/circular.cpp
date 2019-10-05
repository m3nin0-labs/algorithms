/**
 * Script com exemplo de utilização de lista encadeada circular
 * 
*/

#include <iostream>
#include <unistd.h>
#include "linkedlist.h"

using namespace std;

/**
 * Função para criar uma lista encadeada circular
 */
StringNode * createCircularLinkedList() {
    StringNode * ringOne = new StringNode("Ring one");
    StringNode * ringTwo = new StringNode("Ring two");
    StringNode * ringThree = new StringNode("Ring three");

    ringOne->next = ringTwo;
    ringTwo->next = ringThree;
    ringThree->next = ringOne;
}

/**
 * Função para visualizar (de forma infinita) a lista encadeada circular
 */
void viewCircularLinkedList(StringNode * circularList) {
    if (circularList != NULL) {
        cout << circularList->content << endl;
        usleep(2*100000);

        return viewCircularLinkedList(circularList->next);
    }
}

int main(void) {
    StringNode * circularList = createCircularLinkedList();

    viewCircularLinkedList(circularList);
}
