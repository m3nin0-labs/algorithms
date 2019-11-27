#include <iostream>
#include "sort.h"

void Print(int elements[], int size) {
	for(int i = 0; i < size; i++) {
		std::cout << elements[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	int elements[] = {9, 6, 12, 55, 11, 123, 66, 78, -1, -2};
	
	SelectionSort(elements, 10);
	Print(elements, 10);

	return 0;
}

