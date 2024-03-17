#include<iostream>
using namespace std;

int main(){
    //1-2+3-4+5-6...

    int n;
    cout<<"enter a number : ";
    cin>>n;
    int sum = 0;

    //method 1
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0){
    //         sum = sum + i;
    //     }
    //     else{
    //         sum = sum -i;
    //     }
    // }
    // cout<<sum;


    //method 2 (effective)
    if(n%2==0){
        sum = -n/2;
    }
    else{
        sum = -n/2 + n;
    }
    cout<<sum;
}