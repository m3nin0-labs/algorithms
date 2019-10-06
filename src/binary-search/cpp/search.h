#ifndef SEARCH_H_INCLUDED
#define SEARCH_H_INCLUDED

#include <vector>
#include <algorithm>

using namespace std;

/**
 * Busca binária de elementos inteiros
 * 
 * @param elements Vetor de elementos que será pesquisado
 * @param elementoToSearch Elemento pesquisado dentro do vetor
 * @returns Caso encontre o elemento retorna seu índice no vetor, caso contrário retorna -1.
*/
int binarySearch(vector<int> elements, int elementToSearch) {
    int halfIndex;
    int firstIndex = 0;
    int lastIndex = elements.size();

    while(firstIndex <= lastIndex) {
        // Neste momento o problema está sendo dividido
        halfIndex = static_cast<int>((firstIndex + lastIndex) / 2);

        if (elements[halfIndex] == elementToSearch) {
            return halfIndex;
        } else {
            if (elementToSearch < elements[halfIndex]) {
                lastIndex = halfIndex - 1;
            } else {
                firstIndex = halfIndex + 1;
            }
        }
    }
    return -1;
}

/**
 * Busca binária recursiva de elementos inteiros.
 */
int recursiveBinarySearch(vector<int> elements, int firstIndex, int lastIndex, int elementtoSearch) {
    return 0;
}

#endif
