#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

using namespace std;

/**
 * Classe que representa uma pilha de itens do tipo string (Tamanho fixo)
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

/**
 * Classe para a representação de uma lista ligada nas estruturas de Pilha (Stack)
 */
class StringStackNode {
public:
    string content;
    StringStackNode * next;

    StringStackNode() {
        this->content = "";
        this->next = NULL;
    }

    StringStackNode(string content) {
        this->content = content;
        this->next = NULL;
    }

    StringStackNode(string content, StringStackNode * next) {
        this->content = content;
        this->next = next;
    }

    void addNext(StringStackNode * next) {
        this->next = next;
    }

    void changeContent(string content) {
        this->content = content;
    }
};

class StringStackDynamic {
public:
    StringStackDynamic();

    string pop();
    string top();
    void push(string item);
    bool isEmpty();

private:
    StringStackNode * stackHead;

    string getTopItem();
    void verifyIsEmpty();
};

StringStackDynamic::StringStackDynamic() {
    stackHead = new StringStackNode();
}

bool StringStackDynamic::isEmpty() {
    return stackHead->next == NULL;
}

void StringStackDynamic::verifyIsEmpty() {
    if (this->isEmpty())
        throw("Stack is empty");
}

string StringStackDynamic::getTopItem() {
    this->verifyIsEmpty();

    return this->stackHead->content;
}

string StringStackDynamic::top() {
    return this->getTopItem();
}

/**
 * Método de adição de itens na pilha
 */
void StringStackDynamic::push(string item) {

    // Cria um novo nó e então a "cabeça" da pilha passa a ser
    // o último elemento inserido. O elemento anterior por sua vez
    // fica "abaixo" deste.
    stackHead = new StringStackNode(item, this->stackHead);
}

string StringStackDynamic::pop() {
    this->verifyIsEmpty();

    stackHead = stackHead->next;
    return this->getTopItem();
}

#endif
