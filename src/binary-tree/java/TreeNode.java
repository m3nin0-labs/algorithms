package algorithms.tree;

/**
 * Classe que representa as folhas de uma árvore
 * 
 * @author felipe
 *
 * @param <T>
 */
public class TreeNode<T extends Number & Comparable<T>> {

	private T data;
	private TreeNode<T> leftLeaf;
	private TreeNode<T> rightLeaf;

	public TreeNode() {
	}

	public TreeNode(T data) {
		this.data = data;
	}

	public TreeNode(T data, TreeNode<T> leftLeaf, TreeNode<T> rightLeaf) {
		this.data = data;
		this.leftLeaf = leftLeaf;
		this.rightLeaf = rightLeaf;
	}

	public T getData() {
		return data;
	}

	public void setData(T data) {
		this.data = data;
	}

	public TreeNode<T> getLeftLeaf() {
		return leftLeaf;
	}

	public void setLeftLeaf(TreeNode<T> leftLeaf) {
		this.leftLeaf = leftLeaf;
	}

	public TreeNode<T> getRightLeaf() {
		return rightLeaf;
	}

	public void setRightLeaf(TreeNode<T> rightLeaf) {
		this.rightLeaf = rightLeaf;
	}
}
