#include <iostream>
#include "LList.cpp"

int main(void){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    node * head = new node();
    
    arrToList(head, arr, sizeof(arr) / sizeof(int));

    view(head);

    return 0;
}