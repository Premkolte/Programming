#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter a number : ";
    cin>>x;

    if(x%5==0){
        cout<<"divisible by 5";
    }
    else{
        cout<<"NOT divisible by 5";
    }
}