#include<iostream>
using namespace std;
/*
1
12
123
1234
12345
*/
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;

    for(int i= 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}