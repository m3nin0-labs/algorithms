package com.learn;

public class Principal {

	public static void main(String[] args) {
		Fila fila = new Fila();

		fila.insert(1);
		fila.insert(2);
		fila.insert(3);
		fila.insert(4);
		fila.insert(5);

		while (!fila.isEmpty()) {
			int x = fila.remove();
			System.out.println(x);
		}

	}

}
