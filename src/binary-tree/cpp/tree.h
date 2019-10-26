#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>

/**
 * Classe para gerar a representação de um nó de uma árvore
 */
template <typename T>
class TreeNode {
public:
    TreeNode();
    TreeNode(T data);

    T getData();

    void setLeftNode(TreeNode * leftNode);
    void setRightNode(TreeNode * rightNode);

    TreeNode * getLeftNode();
    TreeNode * getRightNode();
private:
    T data;

    TreeNode * leftNode;
    TreeNode * rightNode;
};

template <typename T>
TreeNode<T>::TreeNode() {
}

template <typename T>
TreeNode<T>::TreeNode(T data) {
    this->data = data;
}

template <typename T>
T TreeNode<T>::getData() {
    return this->data;
}

template <typename T>
void TreeNode<T>::setLeftNode(TreeNode<T> * leftNode) {
    this->leftNode = leftNode;
}

template <typename T>
void TreeNode<T>::setRightNode(TreeNode<T> * rightNode) {
    this->rightNode = rightNode;
}

template <typename T>
TreeNode<T> * TreeNode<T>::getLeftNode() {
    return this->leftNode;
}

template <typename T>
TreeNode<T> * TreeNode<T>::getRightNode() {
    return this->rightNode;
}

/**
 * Classe que realiza a representação de uma árvore binária
 */
// ToDo: Especializar as templates, evitando erros de utilização
template <typename G>
class BinaryTree {
public:
    BinaryTree(TreeNode<G> * root);

    TreeNode<G> * getRoot();

    void inOrder();
    void posOrder();
    void preOrder();

    TreeNode<G> * search(G value);
    TreeNode<G> * insert(TreeNode<G> * value);
private:
    TreeNode<G> * root;

    void inOrderRecursive(TreeNode<G> * node);
    void preOrderRecursive(TreeNode<G> * node);
    void posOrderRecursive(TreeNode<G> * node);
    
    TreeNode<G> * searchRecursive(TreeNode<G> * root, G value);
    TreeNode<G> * insertRecursive(TreeNode<G> * root, TreeNode<G> * newNode);
};

template <typename G>
BinaryTree<G>::BinaryTree(TreeNode<G> * root) {
    this->root = root;
}

template <typename G>
TreeNode<G> * BinaryTree<G>::getRoot() {
    return this->root;
}

// simetric order (Ordem simétrica)
template <typename G>
void BinaryTree<G>::inOrderRecursive(TreeNode<G> * node) {
    if (node->getLeftNode() != NULL) {
        // std::cout << "(";
        this->inOrderRecursive(node->getLeftNode());
    } 

    std::cout << " " << node->getData();

    if (node->getRightNode() != NULL) {
        this->inOrderRecursive(node->getRightNode());
        // std::cout << ")";
    }
}

template <typename G>
void BinaryTree<G>::inOrder() {
    this->inOrderRecursive(this->root);
    std::cout << std::endl;
}

template <typename G>
void BinaryTree<G>::posOrderRecursive(TreeNode<G> * node) {
    if (node->getLeftNode() != NULL) {
        this->posOrderRecursive(node->getLeftNode());
    }

    if (node->getRightNode() != NULL) {
        this->posOrderRecursive(node->getRightNode());
    }
    std::cout << " " << node->getData();
}

template <typename G>
void BinaryTree<G>::posOrder() {
    this->posOrderRecursive(this->root);
    std::cout << std::endl;
}

template <typename G>
void BinaryTree<G>::preOrderRecursive(TreeNode<G> * node) {
    std::cout << " " << node->getData();
    if (node->getLeftNode() != NULL) {
        this->preOrderRecursive(node->getLeftNode());
    }

    if (node->getRightNode() != NULL) {
        this->preOrderRecursive(node->getRightNode());
    }
}

// depth-first (Profundidade)
template <typename G>
void BinaryTree<G>::preOrder() {
    this->preOrderRecursive(this->root);
    std::cout << std::endl;
}

template <typename G>
TreeNode<G> * BinaryTree<G>::insert(TreeNode<G> * newNode) {
    return this->insertRecursive(this->root, newNode);
}

template <typename G>
TreeNode<G> * BinaryTree<G>::insertRecursive(TreeNode<G> * root, TreeNode<G> * newNode) {
    if (root == NULL) return newNode;

    if (root->getData() > newNode->getData()) {
        TreeNode<G> * nodeAux = root->getLeftNode();

        root->setLeftNode(this->insertRecursive(
            nodeAux, newNode
        ));
    } else {
        TreeNode<G> * nodeAux = root->getRightNode();

        root->setRightNode(this->insertRecursive(
            nodeAux, newNode
        ));
    }
}

template <typename G>
TreeNode<G> * BinaryTree<G>::search(G value) {
    return this->searchRecursive(this->root, value);
}

template <typename G>
TreeNode<G> * BinaryTree<G>::searchRecursive(TreeNode<G> * root, G value) {
    if (root == NULL) return NULL;
    if (root->getData() == value) return root;

    if (root->getData() > value) return this->searchRecursive(root->getLeftNode(), value);
    else return this->searchRecursive(root->getRightNode(), value);
}

#endif
