#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

using namespace std;

class DualStringNode {
public:
    string content;
    DualStringNode * next;
    DualStringNode * previous;

    DualStringNode() {
        this->content = "";
        this->next = NULL;
        this->previous = NULL;
    }

    DualStringNode(string content) {
        this->content = content;
        this->next = NULL;
        this->previous = NULL; 
    }

    DualStringNode(string content, DualStringNode * next) {
        this->content = content;
        this->next = next;
        this->previous = NULL;
    }

    DualStringNode(string content, DualStringNode * next, DualStringNode * previous) {
        this->content = content;
        this->next = next;
        this->previous = previous;   
    }

    void addNext(DualStringNode * node);
    void addPrevious(DualStringNode * node);
};

void DualStringNode::addNext(DualStringNode * node) {
    this->next = node;
}

void DualStringNode::addPrevious(DualStringNode * node) {
    this->previous = node;
}

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
