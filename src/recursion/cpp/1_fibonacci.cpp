/**
* Algoritmo para o cálculo da sequência de fibonacci utilizando uma função recursiva.
* 
* É importante lembrar que a recursão em fibonacci é ruim, uma vez que, muitos 
* cálculos iguais são realizados ao longo do processo
**/

#include <iostream>

using namespace std;

/**
 * Função recursiva para cálculo da sequência de fibonacci
**/
int fibb(int n){
    // Lembre-se, a parte mais importante do algoritmo recursivo é o ponto de parada
    if (n <= 2) {
        return 1;
    } else {
        return fibb(n - 1) + fibb(n - 2);
    }
}

int main(void){

    // Calcula a sequência de fibonacci até o 6 digito
    cout << fibb(20) << "\n";

    return 0;
}
