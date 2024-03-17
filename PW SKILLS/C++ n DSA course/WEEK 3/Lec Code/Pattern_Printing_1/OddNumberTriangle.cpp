#include<iostream>
using namespace std;

/*
1
13
135
1357
13579
*/

int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i*2;j++){
            if(j%2!=0){
                cout<<j;
            }
        }
        cout<<endl;
    }
}

