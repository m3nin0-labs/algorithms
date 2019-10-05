package algorithm;

import algorithm.recursive.Recursive;
import algorithm.utils.CLI;

public class Principal {

	public static void main(String[] args) {

		CLI.showRecursiveValues(10);

		System.out.println("Fibonacci sequence (N = 15): " + Recursive.fibonacci(15));

	}

}
