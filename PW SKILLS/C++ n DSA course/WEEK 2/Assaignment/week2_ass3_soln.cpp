#include<iostream>
using namespace std;

// //1//
// int main(){
//     for(int i=1;i<100;i=i+2){
//         cout<<i<<endl;
//     }
// }

// //2//
// int main(){
//     for(int i=3;i<100;i+=3){
//         cout<<i<<endl;    }
// }

// //3//
// int main(){
//     cout<<"enter a number : ";
//     int n;
//     cin>>n;

//     for(int i = 1;i<=10;i++){
//         cout<<n*i<<endl;
//     }
// }

// //4//
// //4 7 10 13
// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;

//     int a=4;
//     for(int i=1;i<=n;i++){
//         cout<<a<<endl;
//         a=a+3;
//     }
// }

// //5//
// //3 12 48
// int main(){
//     cout<<"enter a number : ";
//     int n;
//     cin>>n;

//     int a = 3;
//     for(int i=1;i<=n;i++){
//         cout<<a<<endl;
//         a=a*4;
//     }

// }

int main(){
    int i = 1;

    while(i<=100){
        cout<<i<<" "<<(char)i<<endl;
        i++;
    }
}