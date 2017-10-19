#ifndef NOHEAD_H_INCLUDED
#define NOHEAD_H_INCLUDED

using namespace std;

class stringNode{
public:
    stringNode * proximo;
    string conteudo;

    stringNode(){
        this -> proximo = NULL;
    }

    stringNode(string conteudo){
        this -> conteudo = conteudo;
    }

    stringNode(string conteudo, stringNode * proximo){
        this -> conteudo = conteudo;
        this -> proximo = proximo;
    }
    
};

#endif