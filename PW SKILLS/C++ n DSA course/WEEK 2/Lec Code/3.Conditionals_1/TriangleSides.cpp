#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter 1st number";
    cin>>a;
    cout<<"enter 2nd number";
    cin>>b;
    cout<<"enter 3rd number";
    cin>>c;

    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<a<<" "<<b<<" "<<c<<" they can form a trigle";
    }
    else{
        cout<<"they can not form a triangle";
    }
}