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
