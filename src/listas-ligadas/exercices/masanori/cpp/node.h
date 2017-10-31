#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

class node{
public:
    
    node * proximo;
    int conteudo;

    node(){
        proximo = NULL;
    }
    node(int conteudo, node * proximo){
        this -> conteudo = conteudo;
        this -> proximo = proximo;
    }

    int mininum(node * head);
    void add(node * head, int conteudo);
    void view(node * head);
    void removeNode(node * head, int nNode); // Recebe o número do nó a ser excluido
    void removeFirst(node * head);
    void concat(node * n1, node * n2);
    void invert(node * head);
    void arrToList(node * head, int arr[]);  
};
#endif