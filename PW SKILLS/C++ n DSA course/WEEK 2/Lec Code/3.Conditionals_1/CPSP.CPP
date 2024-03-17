#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the cost Price : ";
    int cp;
    cin>>cp;

    cout<<"Enter the selling Price : ";
    int sp;
    cin>>sp;

    if(sp>cp){
        cout<<"PROFIT = "<<sp-cp;
    }
    if(cp>sp){
        cout<<"LOSS = "<<cp-sp;
    }
    if(cp==sp){
        cout<<"NO PROFIT : NO LOSS ! ";
    }
    
}