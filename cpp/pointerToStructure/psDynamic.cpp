#include <iostream>
#include <stdlib.h>
using namespace std;

struct Complex{
    int real, imag;
};

int main(){
    Complex *p;
    p = (struct Complex *)malloc(sizeof(struct Complex)); // for cpp: p = new Complex
    p->real = 10;
    p->imag = 5;
    cout << p->real << " " << p->imag << endl;
    return 0;
}