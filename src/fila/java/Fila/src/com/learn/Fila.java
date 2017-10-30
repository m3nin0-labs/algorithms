package com.learn;

public class Fila {

	private int[] valores;
	private int primeiro;
	private int ultimo;
	private int total;

	public Fila() {
		valores = new int[10];
		primeiro = 0;
		ultimo = 0;
		total = 0;
	}

	public void insert(int e) {
		if (isFull()) {
			throw new RuntimeException("A fila está cheia!");
		}
		valores[ultimo] = e;
		ultimo = (ultimo + 1) % valores.length;
		total++;
	}

	public int remove() {
		if (isEmpty()) {
			throw new RuntimeException("A fila está vazia");
		}
		int e = valores[primeiro];
		primeiro = (primeiro + 1) % valores.length;
		total--;
		return e;
	}

	public boolean isEmpty() {
		return total == 0;
	}

	public boolean isFull() {
		return total == valores.length;
	}
}
