package listaEncadeada;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Lista {

	protected No cabeca;

	Lista() {
		this.cabeca = new No();
		cabeca.proximo = null;
	}

	public void inserir(int conteudo) {
		No nova = new No();

		nova.conteudo = conteudo;
		nova.proximo = this.cabeca.proximo;

		cabeca.proximo = nova;
	}

	public void exibir() {
		No p = this.cabeca.proximo;

		while (p.proximo != null) {
			System.out.println(p.conteudo);
			p = p.proximo;
		}
	}

	@SuppressWarnings("unchecked")
	public void ordena() {
		List<No> nos = new ArrayList<>();
		No p = this.cabeca.proximo;

		while (p.proximo != null) {
			nos.add(p);
			p = p.proximo;
		}

		Collections.sort(nos);
		for (No no : nos) {
			System.out.println(no.conteudo);
		}
	}
	
	public int qtd() {
		No p = this.cabeca.proximo;
		int contador = 0;
		
		while (p.proximo != null) {
			p = p.proximo;
			contador++;
		}
		return contador;
	}
	
	// Exercício 8
	public Integer[] toArray() {
			
		Integer arr[] = new Integer[qtd()];
		List<No> nos = new ArrayList<>();
		No p = this.cabeca.proximo;

		while (p.proximo != null) {
			nos.add(p);
			p = p.proximo;
		}
		
		for (int i = 0; i < nos.size(); i++) {
			arr[i] = nos.get(i).conteudo;
		}
		
		System.out.println(arr);
		
		return arr;
	}

}
