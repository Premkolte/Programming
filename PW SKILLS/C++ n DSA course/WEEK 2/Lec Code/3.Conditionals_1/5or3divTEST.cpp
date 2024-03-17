#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter the number : ";
    cin>>x;
                                                                        
    if(x%5==0 || x%3==0){
        cout<<"the number is divisible by 5 OR 3";
    }
    else{
        cout<<"the number is not divisible by 5 OR 3 BOTH";
    }
    
}