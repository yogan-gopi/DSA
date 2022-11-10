#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

void changeValue(int *a, int *b){
    cout<<*a+*b<<endl;
    cout<<abs(*a-*b)<<endl;
}

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    changeValue(&a, &b);
    return 0;
}