#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED

#include <iostream>
#include <stddef.h>
#include <cstring>
#include <stdexcept>

using namespace std;

/**
 * Classe que representa um elemento da estrutura de dados Deck.
 */
class StringDeckNode {
public:
    StringDeckNode(string content);

    string getContent();

    StringDeckNode * getNext();
    StringDeckNode * getPrevious();

    void addNext(StringDeckNode * next);
    void addPrevious(StringDeckNode * previous);
private:
    string content;
    StringDeckNode * next;
    StringDeckNode * previous;
};

StringDeckNode::StringDeckNode(string content) {
    this->content = content;
}

/**
 * Método para a adição de uma referência ao um elemento 'próximo' a este na fila (deck)
 */
void StringDeckNode::addNext(StringDeckNode * next) {
    this->next = next;
}

/**
 * Método para a adição de uma referência ao elemento 'anterior' a este na fila (deck)
 */
void StringDeckNode::addPrevious(StringDeckNode * previous) {
    this->previous = previous;
}

string StringDeckNode::getContent() {
    return this->content;
}

StringDeckNode * StringDeckNode::getNext() {
    return this->next;
}

StringDeckNode * StringDeckNode::getPrevious() {
    return this->previous;
}

/**
 * Classe que representa a 'cabeça' de um deck de elementos String
 */
class DeckString {
public:
    DeckString();
    DeckString(StringDeckNode * next);
    DeckString(StringDeckNode * next, StringDeckNode * previous);

    void seeDeckFromStart();
    void seeDeckFromLast();

    void addFromStart(StringDeckNode * node);
    void addFromLast(StringDeckNode * node);
    string removeFromStart();
    string removeFromLast();
private:
    StringDeckNode * next;
    StringDeckNode * previous;
};

DeckString::DeckString() {
}

DeckString::DeckString(StringDeckNode * next) {
    this->next = next;
}

DeckString::DeckString(StringDeckNode * next, StringDeckNode * previous) {
    this->next = next;
    this->previous = previous;
}

/**
 * Método para adicionar elementos no início da fila (Deck)
 */
void DeckString::addFromStart(StringDeckNode * node) {
    // Verifica se já há elementos no Deck
    if (this->next == NULL) {
        this->next = node;
        this->previous = node;
    } else {
        node->addNext(this->next);

        this->next->addPrevious(node);
        this->next = node;
    }
}

/**
 * Método para adicionar elementos no final da fila (Deck)
 */
void DeckString::addFromLast(StringDeckNode * node) {
    if (this->previous == NULL) {
        this->next = node;
        this->previous = node;
    } else {
        node->addPrevious(this->previous);

        this->previous->addNext(node);
        this->previous = node;
    }
}

/**
 * Função para remover um elemento do início do Deck
 */
string DeckString::removeFromStart() {
    if (this->next == NULL) {
        throw runtime_error("O deck está vazio! Não há o que remover");
    }

    StringDeckNode * dumpElement = this->next;
    string dumpElementContent = dumpElement->getContent();

    this->next = dumpElement->getNext();

    // Verifica se há mais elementos no Deck ou se o atual é o último
    if (this->next != NULL) {
        this->next->addPrevious(NULL);
    }
    return dumpElementContent;
}

string DeckString::removeFromLast() {
    if (this->previous == NULL) {
        throw runtime_error("O deck está vazio! Não há o que remover");
    }

    StringDeckNode * dumpElement = this->previous;
    string dumpElementContent = dumpElement->getContent();

    this->previous = dumpElement->getPrevious();

    // Verifica se há mais elementos no Deck
    if (this->previous != NULL) {
        this->previous->addPrevious(NULL);
    }

    return dumpElementContent;
}

/**
 * Exibe todos os elementos do Deck do início do fim
 */
void DeckString::seeDeckFromStart() {
    StringDeckNode * node = this->next;

    while (node != NULL) {
        cout << node->getContent() << endl;
        node = node->getNext();
    }
}

/**
 * Exibe todos os elementos do Deck do fim ao início
 */
void DeckString::seeDeckFromLast() {
    StringDeckNode * node = this->previous;

    while (node != NULL) {
        cout << node->getContent() << endl;
        node = node->getPrevious();
    }
}


#endif
