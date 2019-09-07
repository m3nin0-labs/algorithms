#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

using namespace std;

class IntegerNode {
public:
    IntegerNode * next;
    int content;

    IntegerNode() {
        this->next = NULL;
    }

    IntegerNode(int content) {
        this->content = content;
    }
    
    IntegerNode(int content, IntegerNode * next) {
        this->content = content;
        this->next = next;
    }
};

#endif
