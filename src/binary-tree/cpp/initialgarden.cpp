/*
 * Exemplo de utilização da árvore binária (Algoritmo simples, sem ordenação)
*/

#include "tree.h"
#include <iostream>

using namespace std;

int main() {
    TreeNode<string> * rootNode = new TreeNode<string>();
    TreeNode<string> * leftNode = new TreeNode<string>("Oi");
    TreeNode<string> * rightNode = new TreeNode<string>("Tchau");

    // Configurando os nós
    rootNode->setLeftNode(leftNode);
    rootNode->setRightNode(rightNode);

    BinaryTree<string> * binaryTree = new BinaryTree<string>(rootNode);

    cout << binaryTree->getRoot()->getLeftNode()->getData() << endl;
    cout << binaryTree->getRoot()->getRightNode()->getData() << endl;
}
