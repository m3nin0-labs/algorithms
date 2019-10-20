/**
 * Script criado para exemplificar a utilização do método Pós-Ordem de percorrer uma árvore binária
*/

#include "tree.h"
#include <iostream>

using namespace std;

// Função auxiliar para a criação de árvores
TreeNode * createNode(string data) {
    return new TreeNode(data);
}

int main() {
    // Criando os objetos que representam os nós da árvore
    TreeNode * rootNode = new TreeNode("A");
    TreeNode * n1 = createNode("B");
    TreeNode * n2 = createNode("D");
    TreeNode * n3 = createNode("C");
    TreeNode * n4 = createNode("D");
    TreeNode * n5 = createNode("E");
    TreeNode * n6 = createNode("F");
    TreeNode * n7 = createNode("G");
    TreeNode * n8 = createNode("H");
    TreeNode * n9 = createNode("I");

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
    BinaryTree * binaryTree = new BinaryTree(rootNode);

    // Validação baseada em: https://www.ime.usp.br/~song/mac5710/slides/05tree.pdf
    binaryTree->posOrder();
}
