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
BinaryTree<string> * createPolishTree() {
    TreeNode<string> * node1 = new TreeNode<string>("a");
    TreeNode<string> * node2 = new TreeNode<string>("+");
    TreeNode<string> * node3 = new TreeNode<string>("*");
    TreeNode<string> * node4 = new TreeNode<string>("b");
    TreeNode<string> * node5 = new TreeNode<string>("-");
    TreeNode<string> * node6 = new TreeNode<string>("/");
    TreeNode<string> * node7 = new TreeNode<string>("c");
    TreeNode<string> * node8 = new TreeNode<string>("d");
    TreeNode<string> * node9 = new TreeNode<string>("e");

    node6->setLeftNode(node7);
    node6->setRightNode(node8);
    node5->setLeftNode(node6);
    node5->setRightNode(node9);
    node3->setLeftNode(node4);
    node3->setRightNode(node5);
    node2->setLeftNode(node1);
    node2->setRightNode(node3);

    return new BinaryTree<string>(node2);
}

int main() {
    BinaryTree<string> * binaryTree = createPolishTree();

    binaryTree->inOrder();
}
