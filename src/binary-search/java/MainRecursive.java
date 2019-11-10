package algorithms.binarysearch;

import java.util.Arrays;
import java.util.List;

/**
 * Exemplo de busca binária recursiva
 * 
 * @author felipe
 *
 */
public class MainRecursive {
	public static void main(String[] args) {
		BinarySearch<Double> binarySearch = new BinarySearch<Double>();
		List<Double> myList = Arrays.asList(new Double[] { 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0 });

		System.out.println("Elemento pesquisado: 8.0\n" + binarySearch.searchRecursive(8.0, myList));
		System.out.println("Elemento pesquisado: 45.0\n" + binarySearch.searchRecursive(45.0, myList));
	}
}
