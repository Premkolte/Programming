#include<iostream>
using namespace std;

int main(){
    cout<<"enter your marks : ";
    int n;
    cin>>n;
 /*   
    if(n>=91 && n<=100){
        cout<<"Excellent";
    }
    if(n>=81 && n<=90){
        cout<<"Very Good";
    }
    if(n>=71 && n<=80){
        cout<<"Good";
    }
    if(n>=61 && n<=70){
        cout<<"Can Do Better";
    }
    if(n>=51 && n<=60){
        cout<<"Average";
    }
    if(n>=41 && n<=50){
        cout<<"Below Average";
    }
    if(n<40){
        cout<<"FAIL";
    }
*/


/*
    if(n>=91){
        cout<<"excellent";
    }
    else{
        if(n>=81){
            cout<<"Very Good";
        }
        else{
            if(n>=71){
                cout<<"Good";
            }
            else{
                if(n>=61){
                    cout<<"can do better";
                }
                else{
                    if(n>=51){
                        cout<<"Average";
                    }
                    else{
                        if(n>=41){
                            cout<<"below Average";
                        }
                        else{
                            cout<<"FAIL";
                        }
                    }
                }
            }
        }
    }
*/

    if(n>=91){
        cout<<"Excellent";
    }
    else if(n>=81){
        cout<<"very good";
    }
    else if(n>=71){
        cout<<"good";
    }
    else if(n>=61){
        cout<<"can do better";
    }
    else if(n>=51){
        cout<<"average";
    }
    else if(n>=41){
        cout<<"below average";
    }
    else{
        cout<<"FAIL";
    }

}
