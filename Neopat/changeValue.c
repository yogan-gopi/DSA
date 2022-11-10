#include <stdio.h>
#include <stdlib.h>


void changeValue(int *a, int *b){
    printf("%d\n", *a+*b);
    printf("%d\n", abs(*a-*b));
}

int main(){
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    changeValue(&a, &b);
    return 0;
}