#include<iostream>
using namespace std;

int main(){
    int a=10; //devidend
    int b=3; //divisor
    int r; //remainder
    int q; //quotient

    q=a/b;
    r=a-(q*b);
    cout<<r<<endl;


    //OR 

    int f;
    f = a % b;
    cout<<f;
}