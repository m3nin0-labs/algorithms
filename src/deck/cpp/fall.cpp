/**
 * Script criado para apresentar um exemplo de utilização da remoção de elementos
 * no fim e no início de um deck
 * 
*/

#include "deck.h"
#include <iostream>

using namespace std;

int main() {
    DeckString * deckString = new DeckString();

    StringDeckNode * stringNodeOne = new StringDeckNode("Texto 1");
    StringDeckNode * stringNodeTwo = new StringDeckNode("Texto 2");

    cout << "Adicionando no início e removendo no início" << endl;
    deckString->addFromStart(stringNodeOne);
    deckString->addFromStart(stringNodeTwo);

    cout << deckString->removeFromStart() << endl;
    cout << deckString->removeFromStart() << endl;

    cout << "Adicionando no início e removendo no fim" << endl;
    deckString->addFromStart(stringNodeOne);
    deckString->addFromStart(stringNodeTwo);

    cout << deckString->removeFromLast() << endl;
    cout << deckString->removeFromLast() << endl;

    cout << "Adicionando no fim e removendo no início" << endl;
    deckString->addFromLast(stringNodeOne);
    deckString->addFromLast(stringNodeTwo);

    cout << deckString->removeFromStart() << endl;
    cout << deckString->removeFromStart() << endl;

    cout << "Adicionando no fim e removendo no fim" << endl;
    deckString->addFromLast(stringNodeOne);
    deckString->addFromLast(stringNodeTwo);

    cout << deckString->removeFromLast() << endl;
    cout << deckString->removeFromLast() << endl;
}
