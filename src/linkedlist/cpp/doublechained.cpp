/**
 * Exemplo de utilização de uma lista duplamente encadeada
*/

#include <iostream>
#include <unistd.h>
#include "linkedlist.h"

void seeDualNode(DualStringNode * list) {

    if (list != NULL) {
        cout << "=============" << endl;
        if (list->previous != NULL) {
            cout << "content prior to current node" << endl;
            cout << list->previous->content << endl;
        } else {
            cout << "this node has no previous element" << endl;
        }
        
        if (list->next != NULL) {
            cout << "content after the current node" << endl;
            cout << list->next->content << endl;
        } else {
            cout << "this node has no next element" << endl;
        }
        cout << "=============" << endl;

        usleep(5*1000000);
        return seeDualNode(list->next);
    }
}

int main(void) {
    DualStringNode * nodeOne = new DualStringNode("Node One");
    DualStringNode * nodeTwo = new DualStringNode("Node two");
    DualStringNode * nodeThree = new DualStringNode("Node Three");

    nodeOne->addNext(nodeTwo);
    nodeTwo->addPrevious(nodeOne);
    nodeTwo->addNext(nodeThree);
    nodeThree->addPrevious(nodeTwo);

    seeDualNode(nodeOne);
}
