package algorithms.tree;

public class VisualizeTree {
	public static void main(String[] args) {
		BinaryTree<Double> binaryTree = new BinaryTree<Double>(new TreeNode<Double>(5.0));

		binaryTree.insertNode(new TreeNode<Double>(1.0));
		binaryTree.insertNode(new TreeNode<Double>(2.0));
		binaryTree.insertNode(new TreeNode<Double>(6.0));
		binaryTree.insertNode(new TreeNode<Double>(8.0));
		
		System.out.println("Visualização em Pré-ordem (Deep-first)");
		binaryTree.showTree(new PreOrderSweeper());

		System.out.println("Visualização em In-ordem (Simétrica)");
		binaryTree.showTree(new InOrderSweeper());
		
		System.out.println("Visualização em Pós-ordem");
		binaryTree.showTree(new PosOrderSweeper());
	}
}
