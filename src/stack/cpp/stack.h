#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

using namespace std;

/**
 * Classe que representa uma pilha de itens do tipo string
 * 
*/
class StringStackArray {
public:
    string item;
    string itens[10];

    StringStackArray();

    string pop();
    string top();
    bool isFull();
    bool isEmpty();
    void push(string element);
private:
    int topIndex;

    string getTop();
    bool isAny(int valueToVerify);
    void verifyIsFull();
    void verifyIsEmpty(); 
};

StringStackArray::StringStackArray() {
    this->topIndex = 0;
}

bool StringStackArray::isAny(int valueToVerify) {
    bool boolFlag = false;
    
    if (this->topIndex == valueToVerify) {
        boolFlag = true;
    }
    return boolFlag;
}

bool StringStackArray::isFull() {
    return this->isAny(10);
}

bool StringStackArray::isEmpty() {
    return this->isAny(0);
}

void StringStackArray::push(string element) {
    this->verifyIsFull();

    this->itens[this->topIndex] = element;
    this->topIndex += 1;
}

string StringStackArray::pop() {
    this->verifyIsEmpty();

    this->topIndex -= 1;
    return this->getTop();
}

string StringStackArray::top() {
    this->verifyIsEmpty();
    
    return this->getTop();
}

string StringStackArray::getTop() {
    return this->itens[this->topIndex];
}

void StringStackArray::verifyIsFull() {
    if (this->isFull()) {
        throw("Stack is full!");
    }
}

void StringStackArray::verifyIsEmpty() {
    if (this->isEmpty()) {
            throw("Stack is empty!");
    }
}


#endif
