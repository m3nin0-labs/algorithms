/**
 * Script que apresenta formas de realizar buscas em uma lista ligada.
 * 
*/

#include <iostream>
#include "linkedlist.h"

using namespace std;

string searchInLinkedList(string pattern, StringNode * list) {
    if (list != NULL) {
        if (list->content.compare(pattern) == 0) {
            string s = "pattern ";
            s.append(pattern);
            s.append(" found!");

            return s;
        }
        return searchInLinkedList(pattern, list->next);
    }
    return "pattern not found";
}

int main(void) {
    // Buscando os dados em uma lista "sem cabeça"
    StringNode * stringNode = new StringNode("Oi", new StringNode("Tchau"));

    cout << searchInLinkedList("Oi", stringNode) << endl;
    cout << searchInLinkedList("oi", stringNode) << endl;

    // Buscando os dados em uma lista "com cabeça"
    NodeHead * nodeHead = new NodeHead(stringNode);

    cout << searchInLinkedList("Tchau", nodeHead->next) << endl;
    cout << searchInLinkedList("Tchauu", nodeHead->next) << endl;
}
