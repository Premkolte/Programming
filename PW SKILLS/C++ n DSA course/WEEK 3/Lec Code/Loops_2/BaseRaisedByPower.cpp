#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter a base : ";
    cin>>a;
    cout<<"enter a power : ";
    cin>>b;
    int power=1;
    for(int i = 1;i<=b;i++){
        power = power * a;
    }
    cout<<power;
}