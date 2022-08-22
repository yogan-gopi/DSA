#include <iostream>
using namespace std;

template <class T>
class Arithmetic{
    private:
        T a, b;
    public:
        Arithmetic(T a, T b);
        T add();
        T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b){
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add(){
    return a+b;
}

template <class T>
T Arithmetic<T>::sub(){
    return a-b;
}


int main(){
    Arithmetic<int> a(10, 5);
    cout << "Addition: " << a.add() << endl;
    cout << "Subtraction: " << a.sub() << endl; 
    Arithmetic<float> b(4.5, 2.3);
    cout << "Addition: " << b.add() << endl;
    cout << "Subtraction: " << b.sub() << endl;
    return 0;
}