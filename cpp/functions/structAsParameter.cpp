#include <iostream>
using namespace std;

struct Rectangle{
    int length, breadth;
};

void fun1(struct Rectangle r){
    r.length = 20;
    cout << "Length: " << r.length << " , Breadth: " << r.breadth << endl;
}

void fun2(struct Rectangle *p){
    p->length = 20;
}

struct Rectangle * fun3(){
    struct Rectangle *p;
    p = new Rectangle;
    p->length = 40;
    p->breadth = 20;
    return p;
}

int main(){
    Rectangle r = {10, 5};
    Rectangle *ptr= fun3();
    fun1(r);
    cout << "Length: "<< r.length << " , Breadth: "<< r.breadth << endl;
    fun2(&r);
    cout << "Length: "<< r.length << " , Breadth: " << r.breadth << endl;
    cout << "Length: "<< ptr->length << " , Breadth: " << ptr->breadth << endl;
    return 0;
}
