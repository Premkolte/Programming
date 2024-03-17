#include<iostream>
using namespace std;

int main(){
    int num1;
    int p = 5;
    int q = 10;

    p += q -= p;  //RIGHT TO LEFT

    cout<<p<<endl;
    cout<<q;

    
}