#include <iostream>
#include "sort.h"

void PrintVec(int elements[], int size) {
	for(int i = 0; i < size; i++) { 
		std::cout << elements[i] << " ";
	}
	std::cout << std::endl;
}


int main() {
	int elements[] = {6, 3, 88, 12, 9, 0, -2, 67};
	
	std::cout << "Vetor inicial" << std::endl;
	PrintVec(elements, 8);

	InsertionSort(elements, 8);

	std::cout << "Vetor ordenado" << std::endl;
	PrintVec(elements, 8);

	return 0;
}

