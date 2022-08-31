#include <iostream>
using namespace std;

int fact(int n){
    if(n > 0){
        return fact(n-1)*n;
    }
    return 1;
}

int Ifact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    cout<<fact(5)<<endl;
    cout<<Ifact(5);
    return 0;
}