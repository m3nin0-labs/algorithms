package com.listaLigada;

public class Principal {
	public static void main(String[] args) {
		Pilha pilha = new Pilha();
		
		// Adicionando elementos
		for (int i = 0; i < 500; i++) {
			pilha.push(i);
		}		
		pilha.view();
	}
}
