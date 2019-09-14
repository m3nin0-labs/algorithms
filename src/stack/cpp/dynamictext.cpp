/**
 * Script que apresenta a forma de utilização da pilha (Stack) dinâmica, criada através da
 * utilização de listas ligadas
 */

#include <iostream>
#include "stack.h"

int main(void) {
    StringStackDynamic * dynamicStack = new StringStackDynamic();

    dynamicStack->push("Um texto");
    dynamicStack->push("Um outro texto");
    dynamicStack->push("Ops!");

    // Verificando o top (Sem remover elementos)
    cout << dynamicStack->top() << endl;

    // Removendo um elemento
    cout << "=== Removendo um elemento ===" << endl;
    cout << dynamicStack->pop() << endl;

    // Verificando novamente o topo (Sem remover elementos)
    cout << "=== Verificando novamente o topo ===" << endl;
    cout << dynamicStack->top() << endl;
}
