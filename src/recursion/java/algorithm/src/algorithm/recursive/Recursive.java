package algorithm.recursive;

public class Recursive {

	/**
	 * Método estático para calcular o fatorial de um número (Método recursivo)
	 * 
	 * @param n
	 * @return
	 */
	public static int factorial(int n) {
		if (n > 1) {
			return factorial(n - 1) * n;
		}
		return 1;
	}

	/**
	 * Calcula a sequência de fibonacci
	 * 
	 * @param n Quantidade de elementos na sequência
	 * @return
	 */
	public static int fibonacci(int n) {
		if (n <= 2) {
			return 1;
		}
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
