#include <iostream>
using namespace std;

int pow(int m, int n){
    if (n == 0)
        return 1;
    else
        return pow(m, n-1)*m;
}

int main(){
    cout << pow(3,3);
    return 0;
}