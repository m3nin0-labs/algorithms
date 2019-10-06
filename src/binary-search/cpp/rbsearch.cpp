/**
 * Script para apresentar um exemplo de utilização da implementação recursiva da busca binária
*/

#include <vector>
#include <iostream>
#include "search.h"

/**
 * Função auxiliar para facilitar a exibição dos resultados
 */
void printSearchResult(int element, int result) {
    cout << "O elemento " << element << " está na posição: " << result << endl;
}

int main() {
    vector<int> elements = {
        55, 56, 57, 89, 101, 102, 103, 506, 708, 1001
    };

    int elementToSearch = 103;
    int elementToSearchTwo = 10000;

    printSearchResult(elementToSearch, recursiveBinarySearch(elements, 0, elements.size(), elementToSearch));
    printSearchResult(elementToSearchTwo, recursiveBinarySearch(elements, 0, elements.size(), elementToSearchTwo));
}
