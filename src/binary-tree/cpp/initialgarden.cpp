/*
 * Exemplo de utilização da árvore binária (Algoritmo simples, sem ordenação)
*/

#include "tree.h"
#include <iostream>

using namespace std;

int main() {
    TreeNode * rootNode = new TreeNode();
    TreeNode * leftNode = new TreeNode("Oi");
    TreeNode * rightNode = new TreeNode("Tchau");

    // Configurando os nós
    rootNode->setLeftNode(leftNode);
    rootNode->setRightNode(rightNode);

    BinaryTree * binaryTree = new BinaryTree(rootNode);

    cout << binaryTree->getRoot()->getLeftNode()->getData() << endl;
    cout << binaryTree->getRoot()->getRightNode()->getData() << endl;
}
