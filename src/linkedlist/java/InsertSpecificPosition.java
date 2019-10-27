package algorithms.linkedlist;

/**
 * Script de exemplo de inserção de um nó em uma lista ligada, com uma posição
 * específica
 *
 */
public class InsertSpecificPosition {
	public static void main(String[] args) {
		GenericLinkedList<String> genericLinkedList = new GenericLinkedList<>();

		// Adicionando dois elementos iniciais
		genericLinkedList.addElement(new Node<>("Bom dia"));
		genericLinkedList.addElement(new Node<>("Boa noite"));

		// Adicionando elemento em uma posição específica (1)
		genericLinkedList.addElementInSpecificPosition(0, new Node<>("Boa tarde"));

		// Visualizando resultado
		genericLinkedList.show();
	}
}
