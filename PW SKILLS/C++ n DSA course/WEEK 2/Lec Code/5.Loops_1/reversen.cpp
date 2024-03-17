#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;

    //n n-1 n-2 ....3 2 1
    int a = n;
    for(int i = 1;i<=n;i++){
        cout<<a<<endl;
        a=a-1;
    }
}