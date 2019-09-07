#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

using namespace std;

class StringNode {
public:
    string content;
    StringNode * next;

    StringNode() {
        this->content = "";
        this->next = NULL;
    }

    StringNode(string content) {
        this->content = content;
        this->next = NULL;
    }

    StringNode(string content, StringNode * next) {
        this->content = content;
        this->next = next;
    }
};

class NodeHead {
public:
    StringNode * next;

    NodeHead() {
        this->next = NULL;
    }

    NodeHead(StringNode * next) {
        this->next = next;
    }
};

#endif
