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

/**
 * Função para remover o primeiro elemento de uma lista sem cabeça.
 * 
 * Diferente da função `removeAfterNode`, aqui considera-se que a lista onde
 * o elemento a ser removido está, não possui um nó dummy (Também chamado de cabeça).
 * Não havendo um centralizador dos endereços da lista, é necessário devolver
 * a referência para o nó que será o primeiro.
*/
StringNode * removeFirstElementInHeadlessList(StringNode * list) {
    return list->next;
}

/**
 * Função para visualizar uma lista encadeada
*/
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

    cout << "removing the first element from the headless list" << endl;
    nodeOne = removeFirstElementInHeadlessList(nodeOne);
    viewLinkedList(nodeOne);
}
