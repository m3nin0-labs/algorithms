/**
 * Script de um exemplo de implementação de uma busca sequencial de elementos. Sendo esta considerada
 * bastante problemática por ir pesquisando elemento a elemento sem considerar nenhum tipo de característica
 * dos dados que estão sendo pesquisados.
*/

#include <vector>
#include <iostream>

using namespace std;

/**
 * Função que realiza a busca sequencial. Caso não encontre o elemento desejado o retorno da função
 * será -1.
*/
int findElementWithSequentialMethod(vector<int> elements, int element) {
    // Faz uma varredura elemento a elemento.
    for(auto el: elements) {
        if (el == element) {
            return element;
        }
    }
    return -1;
}

int main() {
    vector<int> elements = {
        1, 2, 40, 67, 77, 88, 99, 101, 10023, 1234, 12356
    };

    int resultOne = findElementWithSequentialMethod(elements, 101);
    int resultTwo = findElementWithSequentialMethod(elements, 999);

    cout << "Ao pesquisar 101 o resultado foi: " << resultOne << endl;
    cout << "Ao pesquisar 999 o resultado foi: " << resultTwo << endl;
}
