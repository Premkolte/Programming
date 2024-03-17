#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    
    bool flag = true; //true is prime

    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(n==1){
        cout<<n<<" is neither prime nor composite";
    }
    else if(flag==true){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is composite number";
    }
}