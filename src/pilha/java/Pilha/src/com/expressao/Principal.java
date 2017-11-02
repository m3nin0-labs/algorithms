package com.expressao;

/*
 * Verificando se as expressões são balanceadas ou não.
 */

public class Principal {
	public static void main(String[] args) {
		String[] exp = { "( () [ () ] )", "( () [ ( ] ) )", "8+{3-[(3-2)*5]", "8+{3-[(3-2)*5]]}" };

		// Percorrendo os elementos para verificar
		for (int i = 0; i < exp.length; i++) {
			if (isBalanceada(exp[i])) {
				System.out.println(exp[i] + " está bem formada");
			} else {
				System.out.println(" não está bem formada");
			}
		}
	}

	public static boolean isBalanceada(String exp) {
		Pilha pilha = new Pilha();

		String[] v = exp.split("");
		for (int i = 0; i < v.length; i++) {
			switch (v[i]) {

			/*
			 * Nesta primeira parte é feita uma verificação, para saber de qual lado
			 * percente a expressão (esquerda ou direita)
			 * 
			 * esquedo: lado que abre a expressão; direita: lado que fecha a expressão.
			 * 
			 * caso seja do lado esquerdo, a o elemento que compoe a expressão é empilhada
			 * caso contrário, a expressão é comparada com os elementos já comparados.
			 */

			case "(":
			case "[":
			case "{":
				pilha.push(v[i]);
				break;
			case ")":
				if (!pilha.pop().equals("("))
					return false;
				break;
			case "]":
				if (!pilha.pop().equals("["))
					return false;
				break;
			case "}":
				if (!pilha.pop().equals("{"))
					return false;
				break;
			}
		}
		return pilha.isEmpty();
	}
}