#include <iostream>
using namespace std;

int fibo(int n){
    if(n <= 1)
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}

int main(){
    cout << fibo(5) << endl;
    cout << fibo(6) << endl;
    cout << fibo(7) << endl;
    return 0;
}