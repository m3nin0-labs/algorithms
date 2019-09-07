package algorithm.utils;

import algorithm.recursive.Recursive;

public class CLI {
	/**
	 * Exibe todos os valores e resultados do cálculo fatorial (Recursivo)
	 * 
	 * @param n Valor que deve ter fatorial calculado
	 */
	public static void showRecursiveValues(Integer n) {
		for (int i = 1; i <= n; i++) {
			System.out.println("Factorial (".concat(Integer.toString(i)).concat(") = ")
					.concat(Integer.toString(Recursive.factorial(i))));
		}
	}	
}
