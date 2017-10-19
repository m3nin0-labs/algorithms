#include <iostream>

using namespace std;

int fat(int n){
    if(n <= 1)
        return 1;
    else
        return n * fat(n - 1);
}

int main(void){

    cout << "Fatorial de 5: " << fat(5) << "\n";
    cout << "Fatorial de 6: " << fat(6) << "\n";
    
    return 0;
}