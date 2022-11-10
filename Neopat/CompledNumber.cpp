#include <iostream>
using namespace std;

struct complex{
    int real, imag;
};

void printComplex(struct complex c){
    cout << c.real << " + "<< c.imag << "j"<< endl; 
}

void printC(struct complex *c){
    cout << c->real << " + "<< c->imag << "j"<< endl; 
}

struct complex * addC(struct complex *c1, struct complex *c2){
    struct complex *res;
    res = new complex;  
    res->real = c1->real + c2->real;
    res->imag = c1->imag + c2->imag;
    return res;
}

struct complex subC(struct complex c1, struct complex c2){
    struct complex res;
    res.real = c1.real - c2.real;
    res.imag = c1.imag - c2.imag;
    return res;
}

int main(){
    struct complex c1;
    struct complex c2 = {5, 2};
    cin >> c1.real;
    cin >> c1.imag;
    printComplex(c1);
    printComplex(c2);
    struct complex *add = addC(&c1, &c2);
    printC(add);
    struct complex sub = subC(c1, c2);
    printComplex(sub);
    return 0;
}