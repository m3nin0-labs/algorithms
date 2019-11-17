package algorithms.tree;

public class Search {
	public static void main(String[] args) {
		BinaryTree<Double> binaryTree = new BinaryTree<Double>(new TreeNode<Double>(5.0));

		binaryTree.insertNode(new TreeNode<Double>(1.0));
		binaryTree.insertNode(new TreeNode<Double>(2.0));
		binaryTree.insertNode(new TreeNode<Double>(6.0));
		binaryTree.insertNode(new TreeNode<Double>(8.0));

		System.out.println("Busca em Pré-ordem (Deep-first)");
		System.out.println(binaryTree.search(6.0));

		System.out.println("Busca em Pré-ordem (Deep-first) - Sem elemento válido");
		System.out.println(binaryTree.search(66.0));
	}
}
