/*
Write a program to count the minimum number of notes in a given amount using the switch statement.
Input 1: 510
Output1 : notes of “500” = 1 and notes of “10” = 1  
*/

#include<iostream>
using namespace std;
int main()
{
int amount;
int n1,n2,n5,n10,n20,n50,n100,n500,n2000;
/* Note : here you can take another variable for a 2000 rupees note, and modify the
code accordingly.
*/
n1 = n2 = n5 = n10 = n20 = n50 = n100 = n500 = n2000 = 0;
cout<<"Please Enter Your total Amount to find the notes : ";
cin>>amount;

switch(amount>=2000)
{
case 1:
n2000 = amount/2000;
amount -= n2000 * 2000;
break;
}
switch(amount>=500)
{
case 1:
n500 = amount/500;
amount -= n500 * 500;
break;
}
switch(amount >=100)
{
case 1:
n100 = amount/100;
amount -= n100 * 100;
break;
}
switch(amount >=50)
{
case 1:
n50 = amount/50;
amount -= n50 * 50;
}
switch(amount >=20)
{
case 1:
n20 = amount/20;
amount -= n20 * 20;
break;
}
switch(amount >=10)
{
case 1:
n10 = amount/10;
amount -= n10 * 10;
break;
}
switch(amount >=5)
{
case 1:
n5= amount/5;
amount -= n5* 5;
break;
}
switch(amount >=2)
{
case 1:
n2= amount/2;
amount -= n2* 2;
break;
}
switch(amount >=1)
{
case 1:
n1 = amount/1;
amount -= n1 * 1;
break;
}
cout << "Rs.2000 = " << n2000 <<endl;
cout << "Rs.500 = " << n500 <<endl;
cout << "Rs.100 = " << n100 <<endl;
cout << "Rs.50 = " << n50 <<endl;
cout << "Rs.20 = " << n20 <<endl;
cout << "Rs.10 = " << n10 <<endl;
cout << "Rs.5 = " << n5 <<endl;
cout << "Rs.2 = " << n2 <<endl;
cout << "Rs.1 = " << n1 <<endl;
}