#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;

    int fac = 1;
    for(int a = 1;a<=n ;a++ ){
        fac = fac * a;
    }
    

    cout<<fac;
}