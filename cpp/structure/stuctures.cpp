#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){
    struct rectangle r1;
    struct rectangle r2 ={20, 10};

    r1.length = 10;
    r1.breadth = 5;
    cout << "Area of the Rectangle 1: " << r1.length * r1.breadth << endl;
    cout << "Area of the Rectangle 2: " << r2.length * r2.breadth << endl;
    
    return 0;
}