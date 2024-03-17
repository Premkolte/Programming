#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number : ";
    cin>n;

    // //1 3 5 7 .....

    // for(int i = 1 ; i<=2*n-1 ; i=i+2 ){
    //     cout<<i<<endl;
    // }
    // //OR
    // int a = 1;
    // for(int i = 1;i<=n;i++){
    //     cout<<a<<endl;
    //     a=a+2;
    // }


    //4 7 10 13 ....
    int b=4;
    for(int i = 1 ; i<=n ; i++){
        cout<<b<<endl;
        b=b+3;
    }
}