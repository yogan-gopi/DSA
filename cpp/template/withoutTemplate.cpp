#include <iostream>
using namespace std;

class Arithmetic{
    private:
        int a, b;
    public:
        Arithmetic(int a, int b);
        int add();
        int sub();
};

Arithmetic::Arithmetic(int a, int b){
    this->a = a;
    this->b = b;
}

Arithmetic::add(){
    return a+b;
}
Arithmetic::sub(){
    return a-b;
}


int main(){
    Arithmetic a(10, 5);
    cout << "Addition: " << a.add() << endl;
    cout << "Subtraction: " << a.sub() << endl; 
    return 0;
}