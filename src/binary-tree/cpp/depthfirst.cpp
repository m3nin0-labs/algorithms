#include "tree.h"
#include <iostream>

using namespace std;

int main() {
    TreeNode * rootNode = new TreeNode("A");
    TreeNode * nodeB = new TreeNode("B");
    TreeNode * nodeD = new TreeNode("D");
    TreeNode * nodeC = new TreeNode("C");
    TreeNode * nodeE = new TreeNode("E");
    TreeNode * nodeF = new TreeNode("F");
    TreeNode * nodeG = new TreeNode("G");
    TreeNode * nodeH = new TreeNode("H");
    TreeNode * nodeI = new TreeNode("I");

    rootNode->setLeftNode(nodeB);
    rootNode->setRightNode(nodeC);

    nodeB->setLeftNode(nodeD);
    nodeC->setLeftNode(nodeE);
    nodeC->setRightNode(nodeF);
    nodeE->setRightNode(nodeG);

    nodeF->setLeftNode(nodeH);
    nodeF->setRightNode(nodeI);

    BinaryTree * binaryTree = new BinaryTree(rootNode);

    // Percorrendo a árvore gerada
    binaryTree->preOrder();
}
