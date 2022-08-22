#include <iostream>
#include <stdlib.h>
using namespace std;

struct Rectangle{
    int length, breadth;
};

int main(){
    struct Rectangle r = {10, 5};   //struct keyword is not mandatory for cpp
    cout<< r.length << ", " << r.breadth << endl;
    struct Rectangle *p = &r;
    cout << p->length << ", " << p->breadth << endl;     
    return 0;	
}