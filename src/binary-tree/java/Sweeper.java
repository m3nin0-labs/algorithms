package algorithms.tree;

public interface Sweeper {
	/**
	 * Estratégia de varredura aplicada sobre os nós da árvore
	 * 
	 * @param treeNode raiz da árvore que está sendo varrida
	 */
	public void sweep(TreeNode<?> treeNode);
}
