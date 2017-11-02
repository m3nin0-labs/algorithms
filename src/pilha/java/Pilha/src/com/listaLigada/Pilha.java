package com.listaLigada;

// isFull() não é implementado pois vamos utilizar estruturas dinâmicas

public class Pilha {

	private No topo;

	public Pilha() {
		topo = null;
	}

	public boolean isEmpty() {
		return topo == null;
	}

	public void push(int n) {
		No novo = new No();

		novo.conteudo = n;
		novo.proximo = this.topo;
		this.topo = novo;
	}

	public int pop() {
		if (isEmpty()) {
			System.out.println("A pilha está vazia");
			return -1;
		} else {
			// Salva o conteúdo do topo atual
			// e então remove a referência dele
			// Não se preocupe em limpar isso
			// o Garbage collection do java fará isso =D
			int e = topo.conteudo;
			topo = topo.proximo;
			return e;
		}
	}
	
	public void clean() {
		topo = null;
	}
	
	public void view() {
		if (isEmpty()) {
			System.out.println("A pilha está vazia!");
		} else {
			No p = topo; // Ponteiro para percorrer todos os nós
			while (p != null) {
				System.out.println(p.conteudo + " ");
				p = p.proximo;
			}
		}
	}

}
