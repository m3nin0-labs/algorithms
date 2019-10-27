package algorithms.linkedlist;

/**
 * Script de exemplo de inserção de um nó em uma lista ligada
 *
 */
public class Insert {
	public static void main(String[] args) {
		GenericLinkedList<Integer> genericLinkedList = new GenericLinkedList<>();

		// Adicionando três elementos iniciais
		genericLinkedList.addElement(new Node<>(123));
		genericLinkedList.addElement(new Node<>(321));
		genericLinkedList.addElement(new Node<>(655));

		genericLinkedList.show();
	}
}
