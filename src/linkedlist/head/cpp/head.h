#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

class IntNode{
public:

    IntNode * proximo;
    int conteudo;

    IntNode(){
        proximo = NULL;
    }

    IntNode(int conteudo){
        this -> conteudo = conteudo;
    }

    IntNode(int conteudo, IntNode * proximo){
        this -> conteudo = conteudo;
        this -> proximo = proximo;
    }
};

#endif
