package com.expressao;

public class Pilha {

	private No topo; // De forma básica pode-se comparar o topo a uma cabeça das listas encadeadas

	public Pilha() {
		topo = null;
	}

	public boolean isEmpty() {
		return topo == null;
	}

	public void push(String e) {
		No novo = new No();

		novo.conteudo = e;
		novo.proximo = topo;
		topo = novo;
	}

	// Remove elemento da pilha
	public String pop() {
		if (isEmpty()) {
			return "#";
		}
		String tmp = topo.conteudo;
		topo = topo.proximo;
		return tmp;
	}
	
	// Limpa a pilha
	public void imprimir() {
		if (isEmpty()) {
			System.out.println("A lista está vazia, não há o que mostrar");
		} else {
			No p = topo.proximo;
			while (p != null) {
				System.out.println(p.conteudo + " ");
				p = p.proximo;
			}
		}
	}
}
