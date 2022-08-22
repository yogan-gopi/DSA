#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int *p;
    int *p2;
    // for cpp p = new int[5];   delete [ ] p;
    p = arr;
    p2= (int *)malloc(5*sizeof(int));
    p2[0] = 10; p2[1] = 20; p2[2] = 30; p2[3] = 40; p2[4] = 50;
    for(int i = 0; i < 5; i++)
        cout << p[i] << endl;
    for(int i = 0; i < 5; i++)
        cout << p2[i] << endl;
    return 0;
}