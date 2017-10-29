package com.learn;

public class Pilha {

	private int topo; // Representa o topo da pilha
	private int[] elementos;

	public Pilha() {
		topo = -1;
		elementos = new int[5];
	}

	// Empilha
	public void push(int e) {
		if (isFull()) {
			throw new RuntimeException("Pilha cheia!");
		}
		topo++;
		elementos[topo] = e;
	}

	// Desempilha
	public int pop() {
		if (isEmpty()) {
			throw new RuntimeException("Pilha vazia");
		}
		int e = elementos[topo];
		topo--;

		return e;
	}

	// Visualiza quem está no topo
	public int top() {
		if (isEmpty()) {
			throw new RuntimeException("Pilha vazia");
		}
		return elementos[topo];
	}

	public boolean isEmpty() {
		return (topo == -1);
	}

	public boolean isFull() {
		return (topo == elementos.length);
	}

}
