#include <iostream>
#include "noHead.h"

using namespace std;

void
add(stringNode * lista, string conteudo){

    stringNode * nova = new stringNode();

    nova -> conteudo = conteudo;
    lista -> proximo = nova;
}


void
view(stringNode * lista){

    stringNode * p = lista;

    while (p != NULL){
        cout << p -> conteudo << "\n";
        p = p -> proximo;
    }
}

int
main(void){

    stringNode * noHead = new stringNode("Uva");

    add(noHead, "Abacate");
    view(noHead);

    return 0;
}