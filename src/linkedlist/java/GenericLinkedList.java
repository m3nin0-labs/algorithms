package algorithms.linkedlist;

import java.util.Objects;

/**
 * Implementação de uma lista ligada, vale lembrar que a estratégia adotada aqui
 * faz com que para cada elemento adicionado na lista encadeada faz com que os
 * elementos mais antigos da lista sejam movidos para o 'fundo'
 * 
 * @author felipe
 *
 * @param <T>
 */
public class GenericLinkedList<T> {
	private Node<T> firstElement;

	public GenericLinkedList() {
	}

	public GenericLinkedList(Node<T> firstElement) {
		this.firstElement = firstElement;
	}

	public Node<T> getFirstElement() {
		return firstElement;
	}

	public void setFirstElement(Node<T> firstElement) {
		this.firstElement = firstElement;
	}

	/**
	 * Adiciona um elemento a lista encadeada
	 * 
	 * @param newNode
	 */
	public void addElement(Node<T> newNode) {
		newNode.setNext(firstElement);
		firstElement = newNode;
	}

	/**
	 * Adiciona um elemento na lista encadeada em uma posição específica
	 * 
	 * @param positionNumber
	 * @param node
	 */
	public void addElementInSpecificPosition(Integer positionNumber, Node<T> node) {
		addElementInSpecificPositionRecursive(positionNumber, firstElement, node);
	}

	/**
	 * Mecanismo para adicionar um elemento em uma posição específica. Utiliza uma
	 * abordagem recursiva.
	 * 
	 * @param positionNumber
	 * @param node
	 * @param newNode
	 */
	private void addElementInSpecificPositionRecursive(Integer positionNumber, Node<T> node, Node<T> newNode) {
		if (positionNumber.equals(0) && !Objects.isNull(node)) {
			// O contador é utilizado para que haja conhecimento sobre a posição atual da
			// lista em que se está

			newNode.setNext(node.getNext());
			node.setNext(newNode);
		} else {
			addElementInSpecificPositionRecursive(positionNumber - 1, node.getNext(), newNode);
		}
	}

	/**
	 * Exibe os elementos presentes na lista ligada
	 */
	public void show() {
		showRecursive(firstElement);
	}

	/**
	 * Exibe os elementos de uma lista duplamente encadeada (De trás para frente)
	 */
	public void showReverse() {
		Node<T> node = getLastNode(firstElement);
		showReverseRecursive(node);
	}

	/**
	 * Recupera o último elemento da lista ligada
	 * 
	 * @param node
	 * @return
	 */
	private Node<T> getLastNode(Node<T> node) {
		while (!Objects.isNull(node.getNext())) {
			node = node.getNext();
		}
		return node;
	}

	@SuppressWarnings("static-access")
	private void showReverseRecursive(Node<T> node) {
		if (!Objects.isNull(node)) {
			System.out.println(node.getContent());

			try {
				Thread.currentThread().sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}

			showReverseRecursive(node.getPrevious());
		}
	}

	/**
	 * Mecanismo para exibir os elementos da lista encadeada de forma recursiva
	 * 
	 * @param node
	 */
	@SuppressWarnings("static-access")
	private void showRecursive(Node<T> node) {
		if (!Objects.isNull(node)) {
			System.out.println(node.getContent());

			try {
				Thread.currentThread().sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			showRecursive(node.getNext());
		}
	}

	/**
	 * Método para buscar elementos dentro da lista ligada
	 * 
	 * @param element Valor pesquisado dentro da lista
	 * @return Node<T> Nó com o elemento encontrado
	 */
	public Node<T> search(T element) {
		return searchRecursive(this.getFirstElement(), element);
	}

	/**
	 * Método para realizar a busca em uma lista ligada de forma recursiva
	 * 
	 * @param node
	 * @param element
	 * @return
	 */
	private Node<T> searchRecursive(Node<T> node, T element) {
		if (Objects.isNull(node))
			return null;

		if (node.getContent().equals(element)) {
			return node;
		} else {
			return searchRecursive(node.getNext(), element);
		}
	}
}
