package algorithms.linkedlist;

public class DoubleLinkedList {
	public static void main(String[] args) {
		Node<Integer> nodeOne = new Node<>(1);
		Node<Integer> nodeTwo = new Node<>(2);
		Node<Integer> nodeThree = new Node<>(3);

		// Configurando node one
		nodeOne.setNext(nodeTwo);

		// Configurando o Node two
		nodeTwo.setPrevious(nodeOne);
		nodeTwo.setNext(nodeThree);

		// Configurando o Node three
		nodeThree.setPrevious(nodeTwo);

		GenericLinkedList<Integer> genericLinkedList = new GenericLinkedList<>(nodeOne);

		genericLinkedList.show();	
		System.out.println("Mostrando os nós anteriores");
		genericLinkedList.showReverse();
	}
}
