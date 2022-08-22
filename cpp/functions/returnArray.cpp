#include<iostream>
using namespace std;

int * createArray(int n){
    int *p;
    p = new int[n];
    for(int i = 0; i < n; i++)
        p[i] = i*2;
    return p;
}
int main(){
    int *arr, n = 5;
    arr = createArray(n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}