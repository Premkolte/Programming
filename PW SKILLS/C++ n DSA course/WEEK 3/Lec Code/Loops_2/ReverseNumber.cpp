#include<iostream>
using namespace std;

int main(){
    cout<<"enter a number : ";
    int n;
    cin>>n;

    int reverse = 0;
    int lastdigit = 0;

    while(n>0){
        reverse = reverse*10;
        lastdigit=n%10;
        reverse = reverse + lastdigit;
        n=n/10;
    }

    cout<<reverse;

}