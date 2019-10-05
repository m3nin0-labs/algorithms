/**
 * Script com exemplo de utilização de uma implementação de Deck. Neste exemplo
 * todos os elementos são adicionados no início e depois visualizados. 
*/

#include "deck.h"

int main() {
    DeckString * deckString = new DeckString();

    StringDeckNode * stringNodeOne = new StringDeckNode("Texto 1");
    StringDeckNode * stringNodeTwo = new StringDeckNode("Texto 2");
    StringDeckNode * stringNodeThree = new StringDeckNode("Texto 3");

    deckString->addFromStart(stringNodeOne);
    deckString->addFromStart(stringNodeTwo);
    deckString->addFromStart(stringNodeThree);

    cout << "Crescendo" << endl;
    cout << "===== Visualizando do início para o fim =====" << endl;
    deckString->seeDeckFromStart();

    cout << "===== Visualizando do fim para o início =====" << endl;
    deckString->seeDeckFromLast();
}
