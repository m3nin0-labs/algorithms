/**
 * Script de exemplo de utilização da busca em árvore binária
*/

#include "tree.h"
#include <iostream>

using namespace std;

int main(void) {
    BinaryTree<int> * binaryTree = new BinaryTree<int>(new TreeNode<int>(42));

    // Populando a árvore
    binaryTree->insert(new TreeNode<int>(12));
    binaryTree->insert(new TreeNode<int>(11));
    binaryTree->insert(new TreeNode<int>(78));
    binaryTree->insert(new TreeNode<int>(99));

    // Realizando busca
    cout << "Elemento encontrado (12): " << binaryTree->search(12)->getData() << endl;
    cout << "Elemento não encontrado (199): " << binaryTree->search(199) << endl;
}
