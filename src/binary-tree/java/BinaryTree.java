package algorithms.tree;

import java.util.Objects;

/**
 * Classe da árvore binária
 * 
 * @author felipe
 *
 * @param <T>
 */
public class BinaryTree<T extends Number & Comparable<T>> {
	private final TreeNode<T> root; // immutable

	BinaryTree(TreeNode<T> root) {
		this.root = root;
	}

	public TreeNode<T> getRoot() {
		return root;
	}

	/**
	 * Função para inserir nós na árvore binária
	 * 
	 * @param newNode
	 */
	public void insertNode(TreeNode<T> newNode) {
		this.insertNodeEngine(this.root, newNode);
	}

	/**
	 * Engine que realiza a inserção recursiva dos elementos na árvore binária.
	 * Mantendo toda sua estrutura ordenada
	 * 
	 * @param root
	 * @param newNode
	 * @return
	 */
	private TreeNode<T> insertNodeEngine(TreeNode<T> root, TreeNode<T> newNode) {
		if (Objects.isNull(root))
			return newNode;

		if (root.getData().compareTo(newNode.getData()) == 1) // >= 1 indica que root > newNode
			root.setLeftLeaf(insertNodeEngine(root.getLeftLeaf(), newNode));
		else
			root.setRightLeaf(insertNodeEngine(root.getRightLeaf(), newNode));

		return root;
	}

	public void showTree(Sweeper sweeper) {
		sweeper.sweep(root);
	}

	/**
	 * Realiza a busca de um elemento na árvore binária
	 * 
	 * @param element
	 * @return
	 */
	public TreeNode<T> search(T element) {
		return searchEngine(element, root);
	}

	/**
	 * Engine de busca binária na árvore. Perceba que, por estar ordenado a busca é
	 * fácilmente construída seguindo a ideia binária, onde o espaço vai sendo
	 * dividido para que na busca não seja considerado valores que não fazem sentido
	 * ser comparados
	 * 
	 * @param element
	 * @param root
	 * @return
	 */
	private TreeNode<T> searchEngine(T element, TreeNode<T> root) {
		if (Objects.isNull(root))
			return null;

		// Raiz
		if (root.getData().equals(element))
			return root;

		// Esquerda-Direita
		if (root.getData().compareTo(element) == 1)
			return searchEngine(element, root.getLeftLeaf());
		return searchEngine(element, root.getRightLeaf());

	}

}
