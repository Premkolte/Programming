#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter a number : 89";
    cin>>x;

    if(x%5==0 && x%3==0){
        cout<<"YES ! it is divisible by both 5 and 3";   
    }
    else{
        cout<<"NO ! it is not divisible by 5 and 3";
    }
    
}