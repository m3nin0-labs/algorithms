/**
 * Script criado para exemplificar a utilização do método Pós-Ordem de percorrer uma árvore binária
*/

#include "tree.h"
#include <iostream>

using namespace std;

// Função auxiliar para a criação de árvores
TreeNode<string> * createNode(string data) {
    return new TreeNode<string>(data);
}

int main() {
    // Criando os objetos que representam os nós da árvore
    TreeNode<string> * rootNode = new TreeNode<string>("A");
    TreeNode<string> * n1 = createNode("B");
    TreeNode<string> * n2 = createNode("D");
    TreeNode<string> * n3 = createNode("C");
    TreeNode<string> * n4 = createNode("D");
    TreeNode<string> * n5 = createNode("E");
    TreeNode<string> * n6 = createNode("F");
    TreeNode<string> * n7 = createNode("G");
    TreeNode<string> * n8 = createNode("H");
    TreeNode<string> * n9 = createNode("I");

    // Ligando cada um dos elementos
    rootNode->setLeftNode(n1);
    rootNode->setRightNode(n3);

    n1->setLeftNode(n4);

    n3->setLeftNode(n5);
    n3->setRightNode(n6);
    n5->setRightNode(n7);
    n6->setLeftNode(n8);
    n6->setRightNode(n9);

    // Criando a árvore e percorrendo os elementos
    BinaryTree<string> * binaryTree = new BinaryTree<string>(rootNode);

    // Validação baseada em: https://www.ime.usp.br/~song/mac5710/slides/05tree.pdf
    binaryTree->posOrder();
}
