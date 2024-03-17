#include<iostream>
using namespace std;

//1//
/*WAP to print the sum of all the even digits of a given number.
  Sample Input : 4556
  Output: 10*/

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;

    int sum = 0;
    int lastdigit = 0;
    while(n>0){
        lastdigit = n%10;
        if(lastdigit %2==0){
            sum = sum + lastdigit;
        }
        n=n/10;
    }

    cout<<sum;
}

    //2//
    /*WAP to print the sum of a given number and its reverse.
  Sample Input : 12
  Sample Output : 33 [12+21]*/

  int main(){
    cout<<"enter a number : ";
    int n;
    cin>>n;
    int lastdigit = 0;
    int reverse = 0;
    int temp = n;
    while(n>0){
        reverse = reverse *10;
        lastdigit = n%10;
        reverse = reverse + lastdigit;
        n=n/10;

    }

    cout<<"sum is "<<reverse + temp;

  }


  //3//
  /*Print the factorials of first ‘n’ numbers
  Sample Input : 10
  Output :
  1
  2
  6
  24
  120
  720
  5040
  40320
  362880
  3628800*/

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;

    int fac = 1;
    for(int i = 1;i<=n;i++){
        fac = fac * i;
        cout<<fac<<endl;
    }
}

//4//
/*
Print first ‘n’ fibonacci numbers.*/
//   1 1 2 3 5 8 13 21 34 55
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int a=1,b=1,sum=0;
    cout<<"1 1 ";
    for(int i=1;i<=n-2;i++){
        sum=a+b;

        a=b;
        b=sum;
        
        cout<<sum<<" ";

    }
}


//5//
/*Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number.Forexample, 153=(1*1*1)+(5*5*5)+(3*3*3)
   Output :
   1
   153
   370
   371 
   407
*/

int main(){
    for(int i = 1;i<=500;i++){
        int temp = i,arm=0;
        while(temp>0){
            int lastdigit = temp%10;
            arm = arm + (lastdigit*lastdigit*lastdigit);
            temp = temp/10;
        }
        if(i==arm){
            cout<<i<<endl;
        }
    }
}

    