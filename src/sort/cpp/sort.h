#ifndef SORT_HEADER
#define SORT_HEADER

void SelectionSort(int elements[], int size) {
	for(int i = 0; i < size; i++) {
		int min = i;
		int actual_element = elements[i];
	
		// Buscando o menor elemento
		for(int j = i + 1; j < size; j++)
			if (elements[j] < elements[min])
				min = j;
		elements[i] = elements[min];
		elements[min] = actual_element;
	}
}

void BubbleSort(int * elements, int size) {
	for(int j = 0; j < size - 1; j++) {
		for(int i = 0; i < size - 1; i++) {
			// Compara os pares (Atual | Próximo)
			if (elements[i] > elements[i + 1]) {
				int aux = elements[i];
				elements[i] = elements[i + 1];
				elements[i + 1] = aux;
			}
		}
	}
}

void InsertionSort(int elements[], int size) {
	for(int i = 1; i < size; i++) {
		int j = i - 1;
		int key = elements[i];

		while (j >= 0 && elements[j] > key) {
			// Movendo para a direita
			elements[j + 1] = elements[j];

			// Substitui o elemento a esquerda pela chave
			elements[j] = key;
			j -= 1;
		}
	}
}

#endif
