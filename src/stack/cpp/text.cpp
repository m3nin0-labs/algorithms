/**
 * Script com exemplo de utilização da classe de Pilha (Stack) de tamanho fixo (Máximo de 10 elementos)
 */

#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    StringStackArray * stringStackArray = new StringStackArray();

    stringStackArray->push("Tchau!");
    stringStackArray->push("Oi como vai você ?");

    cout << stringStackArray->pop() << endl;    
    cout << stringStackArray->pop() << endl;
    // An exception (Stack is empty)
    // cout << stringStackArray->pop() << endl;
    
    // Another exception (Stack is empty)
    // cout << stringStackArray->top() << endl;
}
