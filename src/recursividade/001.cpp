#include <iostream>

using namespace std;

// É importante lembrar que a recursão em fibonacci é ruim
int fibb(int n){
    if (n <= 2){
        return 1;
    } else {
        return fibb(n - 1) + fibb(n - 2);
    }
}
int main(void){

    cout << fibb(6) << "\n";

    return 0;
}