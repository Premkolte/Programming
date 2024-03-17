#include<iostream>
using namespace std;

int main(){
    float x;
    cin>>x;
    int y = (int)x;
    if(y<0) y = y - 1;
    
    float z = (float)y;
    x = x - z;
    cout<<x;
}