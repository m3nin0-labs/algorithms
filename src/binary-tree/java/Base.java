package algorithms.tree;

public class Base {
	public static void main(String[] args) {
		BinaryTree<Double> binaryTree = new BinaryTree<Double>(new TreeNode<Double>(5.0));

		// Inserção de elementos
		binaryTree.insertNode(new TreeNode<Double>(1.0));
		binaryTree.insertNode(new TreeNode<Double>(6.0));
		binaryTree.insertNode(new TreeNode<Double>(8.0));
	}
}
