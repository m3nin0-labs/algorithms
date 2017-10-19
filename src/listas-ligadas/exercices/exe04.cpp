#include <iostream>
#include "LList.cpp"

using namespace std;

int main(void){

    node * head = new node();
    
    for(int i = 1; i < 100; i += 15){
        add(head, i);
    }
    view(head);

    cout << "O menor valor da lista é " << mininum(head) << "\n";

    return 0;
}