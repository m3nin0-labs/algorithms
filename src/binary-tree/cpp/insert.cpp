/**
 * Script de exemplo de inserção de valores em uma árvore binária. Aqui a ordenação dos elementos inseridos
 * é feita pelo método de inserção
 */

#include <iostream>
#include "tree.h"

using namespace std;

int main(void) {
    BinaryTree<int> * binaryTree = new BinaryTree<int>(new TreeNode<int>(1));

    binaryTree->insert(new TreeNode<int>(123));
    binaryTree->insert(new TreeNode<int>(456));
    binaryTree->insert(new TreeNode<int>(89));

    // Visualizando o resultado em diferentes formas de percorrer a árvore
    binaryTree->preOrder();
    binaryTree->inOrder();
    binaryTree->posOrder();
}
