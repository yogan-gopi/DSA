#include <iostream>
using namespace std;

int sum(int n){
    if(n > 0){
        return sum(n-1)+n;
    }
    return 0;
}

int Isum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += i;
    return sum;
}
int main(){
    cout<<sum(6)<<endl;
    cout<<Isum(6);
    return 0;
}