package algorithms.binarysearch;

import java.util.List;

public class BinarySearch<T extends Double> {

	/**
	 * Busca binária
	 * 
	 * @param el   Elemento pesquisado
	 * @param list Lista ordenada onde o elemento é pesquisado
	 * @return
	 */
	public Integer search(T el, List<T> list) {
		int actualIndex;
		int startIndex = 0;
		int endIndex = list.size() - 1;

		while (startIndex <= endIndex) {
			actualIndex = (startIndex + endIndex) / 2;

			if (list.get(actualIndex).equals(el))
				return actualIndex;

			if (list.get(actualIndex) > el)
				endIndex = actualIndex - 1;
			else
				startIndex = actualIndex + 1;

		}
		return null;
	}

	/**
	 * Busca binária (Recursiva)
	 * 
	 * @param el
	 * @param list
	 * @return
	 */
	public Integer searchRecursive(T el, List<T> list) {
		return searchRecursiveEngine(el, list, 0, list.size() - 1);
	}

	/**
	 * Função para executar os passos recursivos da busca binária
	 * 
	 * @param el
	 * @param list
	 * @param startIndex
	 * @param endIndex
	 * @return
	 */
	private Integer searchRecursiveEngine(T el, List<T> list, int startIndex, int endIndex) {
		int actualIndex = (startIndex + endIndex) / 2;

		if (startIndex > endIndex)
			return null;

		if (list.get(actualIndex).equals(el))
			return actualIndex;

		if (list.get(actualIndex) < el)
			return searchRecursiveEngine(el, list, actualIndex + 1, endIndex);
		else
			return searchRecursiveEngine(el, list, startIndex, actualIndex - 1);
	}
}
