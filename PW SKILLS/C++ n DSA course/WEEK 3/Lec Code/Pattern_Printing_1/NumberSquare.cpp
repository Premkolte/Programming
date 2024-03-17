#include<iostream>
using namespace std;
/*
12345
12345
12345
12345
12345
*/

int main(){
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;

    for(int i = 1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}