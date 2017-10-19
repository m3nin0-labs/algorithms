#include <iostream>
#include "head.h"

using namespace std;

void
criaLista(IntNode * lista, int conteudo){

    IntNode * nova = new IntNode(conteudo);

    nova -> proximo = lista -> proximo;
    lista -> proximo = nova;
}

void
exibeNos(IntNode * lista){

    IntNode * p;

    p = lista -> proximo;

    while(p != NULL){
        cout << p -> conteudo << "\n";
        p = p -> proximo;  
    }
}

int main(void){

    IntNode * head = new IntNode();

    for(int i = 0; i < 10; i++){
        criaLista(head, i * 2);
    }
    exibeNos(head);
}