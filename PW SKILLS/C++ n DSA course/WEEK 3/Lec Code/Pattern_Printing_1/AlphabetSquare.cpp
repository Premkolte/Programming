#include<iostream>
using namespace std;

/*
ABCD
ABCD
ABCD
ABCD
*/

int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;

    for(int i = 1 ;i<=n;i++){
        for(int j= 1;j<=n;j++){
            char c = 64+j;
            cout<<c<<" ";
        }
        cout<<endl;
    }
}