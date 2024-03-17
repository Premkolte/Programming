#include<iostream>
using namespace std;
/*
*****
****
***
**
*

no of star = n-i+1
*/
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j = 1;j<=(n-i+1);j++)  // importanct part -> // (n-i+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}