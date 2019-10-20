#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>

/**
 * Classe para gerar a representação de um nó de uma árvore
 */
class TreeNode {
public:
    TreeNode();
    TreeNode(std::string data);

    std::string getData();

    void setLeftNode(TreeNode * leftNode);
    void setRightNode(TreeNode * rightNode);

    TreeNode * getLeftNode();
    TreeNode * getRightNode();
private:
    std::string data;

    TreeNode * leftNode;
    TreeNode * rightNode;
};

TreeNode::TreeNode() {
}

TreeNode::TreeNode(std::string data) {
    this->data = data;
}

std::string TreeNode::getData() {
    return this->data;
}

void TreeNode::setLeftNode(TreeNode * leftNode) {
    this->leftNode = leftNode;
}

void TreeNode::setRightNode(TreeNode * rightNode) {
    this->rightNode = rightNode;
}

TreeNode * TreeNode::getLeftNode() {
    return this->leftNode;
}

TreeNode * TreeNode::getRightNode() {
    return this->rightNode;
}

/**
 * Classe que realiza a representação de uma árvore binária
 */
class BinaryTree {
public:
    BinaryTree(TreeNode * root);

    TreeNode * getRoot();

    void inOrder();
    void posOrder();
    void preOrder();
private:
    TreeNode * root;

    void inOrderRecursive(TreeNode * node);
    void preOrderRecursive(TreeNode * node);
    void posOrderRecursive(TreeNode * node);
};

BinaryTree::BinaryTree(TreeNode * root) {
    this->root = root;
}

TreeNode * BinaryTree::getRoot() {
    return this->root;
}

// simetric order (Ordem simétrica)
void BinaryTree::inOrderRecursive(TreeNode * node) {
    if (node->getLeftNode() != NULL) {
        // std::cout << "(";
        this->inOrderRecursive(node->getLeftNode());
    } 

    std::cout << node->getData();

    if (node->getRightNode() != NULL) {
        this->inOrderRecursive(node->getRightNode());
        // std::cout << ")";
    }
}

void BinaryTree::inOrder() {
    this->inOrderRecursive(this->root);
    std::cout << std::endl;
}

void BinaryTree::posOrderRecursive(TreeNode * node) {
    if (node->getLeftNode() != NULL) {
        this->posOrderRecursive(node->getLeftNode());
    }

    if (node->getRightNode() != NULL) {
        this->posOrderRecursive(node->getRightNode());
    }
    std::cout << node->getData();
}

void BinaryTree::posOrder() {
    this->posOrderRecursive(this->root);
    std::cout << std::endl;
}

void BinaryTree::preOrderRecursive(TreeNode * node) {
    std::cout << node->getData();
    if (node->getLeftNode() != NULL) {
        this->preOrderRecursive(node->getLeftNode());
    }

    if (node->getRightNode() != NULL) {
        this->preOrderRecursive(node->getRightNode());
    }
}

// depth-first (Profundidade)
void BinaryTree::preOrder() {
    this->preOrderRecursive(this->root);
    std::cout << std::endl;
}

#endif
