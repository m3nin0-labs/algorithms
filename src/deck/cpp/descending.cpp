/**
 * Script com exemplo de utilização de uma implementação de Deck. Neste exemplo
 * todos os elementos são adicionados no fim e depois visualizados. 
*/

#include "deck.h"
#include <iostream>

using namespace std;


int main() {
    DeckString * deckString = new DeckString();

    StringDeckNode * stringNodeOne = new StringDeckNode("Texto 1");
    StringDeckNode * stringNodeTwo = new StringDeckNode("Texto 2");

    deckString->addFromLast(stringNodeOne);
    deckString->addFromLast(stringNodeTwo);

    cout << "Decrescendo" << endl;
    cout << "===== Visualizando do início para o fim =====" << endl;
    deckString->seeDeckFromStart();

    cout << "===== Visualizando do fim para o início =====" << endl;
    deckString->seeDeckFromLast();
}
