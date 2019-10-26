#include "tree.h"
#include <iostream>

using namespace std;

int main() {
    TreeNode<string> * rootNode = new TreeNode<string>("A");
    TreeNode<string> * nodeB = new TreeNode<string>("B");
    TreeNode<string> * nodeD = new TreeNode<string>("D");
    TreeNode<string> * nodeC = new TreeNode<string>("C");
    TreeNode<string> * nodeE = new TreeNode<string>("E");
    TreeNode<string> * nodeF = new TreeNode<string>("F");
    TreeNode<string> * nodeG = new TreeNode<string>("G");
    TreeNode<string> * nodeH = new TreeNode<string>("H");
    TreeNode<string> * nodeI = new TreeNode<string>("I");

    rootNode->setLeftNode(nodeB);
    rootNode->setRightNode(nodeC);

    nodeB->setLeftNode(nodeD);
    nodeC->setLeftNode(nodeE);
    nodeC->setRightNode(nodeF);
    nodeE->setRightNode(nodeG);

    nodeF->setLeftNode(nodeH);
    nodeF->setRightNode(nodeI);

    BinaryTree<string> * binaryTree = new BinaryTree<string>(rootNode);

    // Percorrendo a árvore gerada
    binaryTree->preOrder();
}
