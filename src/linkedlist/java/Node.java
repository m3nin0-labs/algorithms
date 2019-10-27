package algorithms.linkedlist;

public class Node<T> {
	private T content;
	private Node<T> next;
	private Node<T> previous;

	public Node() {
	}

	public Node(T content) {
		this.content = content;
	}

	public Node<T> getNext() {
		return next;
	}

	public void setNext(Node<T> next) {
		this.next = next;
	}

	public T getContent() {
		return content;
	}

	public void setContent(T content) {
		this.content = content;
	}

	public Node<T> getPrevious() {
		return previous;
	}

	public void setPrevious(Node<T> previous) {
		this.previous = previous;
	}
}
