#include <iostream>
#include "sort.h"

void Print(int elements[], int size) {
        for(int i = 0; i < size; i++) {
                std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
}

int main() {
	int elements[] = {6, 4, 10, 6, 78, 109, 12};
	BubbleSort(elements, 7);	
	
	Print(elements, 7);
}

