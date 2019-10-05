/**
 * Script para apresentar um exemplo de utilização da função de busca binária em um vetor de inteiros
 */

#include "search.h"
#include <iostream>

/**
 * Função auxiliar para facilitar a exibição dos resultados
 */
void printSearchResult(int element, int result) {
    cout << "O elemento " << element << " está na posição: " << result << endl;
}

int main() {
    // Os elementos necessariamente precisam estar ordenados
    vector<int> elements = {
        0, 10, 20, 30, 40, 54, 65, 79, 123, 212, 1234
    };
    int elementToSearchOne = 65;
    int elementToSearchTwo = 887; 

    printSearchResult(elementToSearchOne, binarySearch(elements, elementToSearchOne));
    printSearchResult(elementToSearchTwo, binarySearch(elements, elementToSearchTwo));
}
