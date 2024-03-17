#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter 3 numbers : ";
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<a<<" is LARGEST";
    }

    if(b>a && b>>c){
        cout<<b<<" is LARGEST";
    }

    if(c>a && c>b){
        cout<<c<<" is LARGEST";
    }
     
}