#include<iostream>
using namespace std;

int main(){
    //1//
    while('a'<'b'){
        cout<<"hello world"<<endl;
    }

    //2//
    int i;
    while(i=10){
        cout<<i<<endl;
        i = i + 1;
    }

    //3//
    int x = 4,y=0;
    while(x>=0){
        x--;
        y++;
        if(x==y){
            continue;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }

    //4//
    int x=4,y=0;
    while(x>=2){
        if(x==y){
            break;
        }
        else
            cout<<x<<" "<<y<<endl;
            x--;
            y++;
    }

    //5//
    int t= 10;
    while(t/=2){
        cout<<"hello"<<endl;
    }
    }

