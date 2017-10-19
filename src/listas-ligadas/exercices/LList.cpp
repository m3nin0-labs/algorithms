#include <iostream>
#include <array>
#include "node.h"

void add(node * head, int conteudo){
    node * nova = new node(conteudo, head -> proximo);
    head -> proximo = nova;
}

void view(node * head){
    node * p = head -> proximo;
    while(p != NULL){
        std::cout << p -> conteudo << "\n";
        p = p -> proximo;
    }
}

void removeNode(node * head, int nNode){ // Recebe o número do nó a ser excluido
}

void removeFirst(node * head){
    node * p;

    p = head -> proximo;
    head = p -> proximo;

    free(p);
}

void concat(node * h1, node * h2){

    node * p = h1 -> proximo;
    
    while (p -> proximo != NULL)
        p = p -> proximo;
    
    p -> proximo = h2 -> proximo;
}

int mininum(node * head){

    node * p = head -> proximo;
    int mini = p -> conteudo;

    while(p -> proximo != NULL){

        p = p -> proximo;

        if(mini > p -> conteudo)
            mini = p -> conteudo;
    }
    
    return mini;
}

void arrToList(node * head, int arr[], int tamanho){

    for(int i = 0; i < tamanho; i++){
        add(head, arr[i]);
    }
}

void invert(node * head){   
}