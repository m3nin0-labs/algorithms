/*
 * Script de exemplo de utilização da árvore binária para a geração de expressões matemáticas. Obrigado ao canal Programação dinâmica
 * por oferecer a ideia base para a criação deste código =D
 * 
 * Poloneses são bons em matemática ? Nome criado apenas para vincular com a notação polonesa reversa
*/

#include <iostream>
#include "tree.h"

using namespace std;

/**
 * Função auxiliar para gerar uma árvore de exemplo com uma expressão matemática.
 * Processo manual, porém utilizado para fins de entendimento de toda a notação :)
 */
BinaryTree * createPolishTree() {
    TreeNode * node1 = new TreeNode("a");
    TreeNode * node2 = new TreeNode("+");
    TreeNode * node3 = new TreeNode("*");
    TreeNode * node4 = new TreeNode("b");
    TreeNode * node5 = new TreeNode("-");
    TreeNode * node6 = new TreeNode("/");
    TreeNode * node7 = new TreeNode("c");
    TreeNode * node8 = new TreeNode("d");
    TreeNode * node9 = new TreeNode("e");

    node6->setLeftNode(node7);
    node6->setRightNode(node8);
    node5->setLeftNode(node6);
    node5->setRightNode(node9);
    node3->setLeftNode(node4);
    node3->setRightNode(node5);
    node2->setLeftNode(node1);
    node2->setRightNode(node3);

    return new BinaryTree(node2);
}

int main() {
    BinaryTree * binaryTree = createPolishTree();

    binaryTree->inOrder();
}
