/* Write a program to count the minimum number of notes in a given amount using the switch statement.
Input 1: 510
Output1 : notes of “500” = 1 and notes of “10” = 1 */

#include<iostream>
using namespace std;

int main(){
    int amount;
    int n1,n2,n5,n10,n20,n50,n100,n200,n500,n2000;
    cout<<"enter the amount : ";
    cin>>amount;

    switch(amount>=2000){
        case 1:
            n2000 = amount/2000;
            amount = amount - n2000 * 2000;
    }

    switch(amount>=500){
        case 1:
            n500 = amount/500;
            amount = amount - n500 * 500;
    }

    switch(amount>200){
        case 1:
            n200 = amount/200;
            amount = amount - n200 * 200;
    }

    switch(amount>=100){
        case 1:
            n100 = amount/100;
            amount = amount - n100 * 100;
    }

    switch(amount>=50){
        case 1:
            n50 = amount/50;
            amount = amount - n50 * 50;
    }

    switch(amount>=20){
        case 1:
            n20 = amount/20;
            amount = amount - n20 * 20;
    }

    switch(amount>=10){
        case 1:
            n10 = amount/10;
            amount = amount - n10 * 10;
    }

    switch(amount>=5){
        case 1:
            n5 = amount/5;
            amount = amount - n5 * 5;
    }

    switch(amount>=2){
        case 1:
            n2 = amount/2;
            amount = amount - n2 * 2;
    }

    switch(amount>=1){
        case 1:
        n1 = amount/1;
            n1 = amount - n1 * 1;
    }

    cout<<"Rs.2000 = "<<n2000<<endl;
    cout<<"Rs.500 = "<<n500<<endl;
    cout<<"Rs.200 = "<<n200<<endl;
    cout<<"Rs.100 = "<<n100<<endl;
    cout<<"Rs.50 = "<<n50<<endl;
    cout<<"Rs.20 = "<<n20<<endl;
    cout<<"Rs.10 = "<<n10<<endl;
    cout<<"Rs.5 = "<<n5<<endl;
    cout<<"Rs.2 = "<<n2<<endl;
    cout<<"Rs.1 = "<<n1<<endl;
}


/////////////     Predict the output:    /////////////

//2//
#include<iostream>
using namespace std;
int main( ) {
int a = 5, b, c ;
b = a = 15 ;
c = a < 15 ;
cout << "a = " << a << ", b = " << b << " , c = "<< c ;
return 0;
}

//3//
#include<iostream>
using namespace std;
int main() {
int x = 3 ;
float y = 3.0 ;
if (x == y)
cout <<"x and y are equal" ;
else
cout << "x and y are not equal" ;
return 0;
}

//4//
#include<iostream>
using namespace std;
int main(){
int test = 0;
cout << "First character " << '1' << endl;
cout << "Second character " << (test ? 3 : '1') << endl;
return 0;
}

//5//
#include <iostream>
using namespace std;
int main(){
int a = 18; int b = 12;
bool t = (a > 20 && b < 15)? true : false;
cout <<"Value of t: " << t ;
return 0;
}

//6//
#include <iostream>
using namespace std;
int main() {
int number = -4;
char result;
result = number > 0 ? 'P' : 'N';
cout << result << endl;
return 0;
}
