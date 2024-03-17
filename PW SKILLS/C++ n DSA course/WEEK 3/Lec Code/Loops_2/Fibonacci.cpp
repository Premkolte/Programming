#include<iostream>
using namespace std;

// 1 1 2 3 5 8 13 21 ...

int main(){
    cout<<"enter a number : ";
    int n;
    cin>>n;

    int a = 1,b = 1, sum = 0;
    cout<<"this is fibonacci series 1 1 ";
    int c=0;
    for(int i = 1;i<=n-2;i++){
        sum = a+b;
        a=b;
        b=sum;
        c=c+sum;
        cout<<sum<<" ";
    }
    cout<<endl<<"nth term is "<<sum ;
    cout<<endl<<"sum till nth term is "<<c+2;
    
}