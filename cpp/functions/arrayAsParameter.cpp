#include<iostream>
using namespace std;

void printArray(int A[], int n){
    for(int i; i < n; i++){
        cout << A[i] << " ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;
    printArray(arr, n);
    for(int x:arr)
        cout << x << " ";
    return 0;
}