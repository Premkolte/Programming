//1//
/*Take 2 integers input and print the greatest of them
Input 1: a = 5 b = 7
Output 1: second number 7 is the largest.
Input 2: a = 12 b = 1
Output 2 : first number 12 is the largest.
Note : It is ensured that the two numbers will be different*/

#include<iostream>
using namespace std;   
int main(){
    cout<<"enter 2 numbers : ";
    int a,b;
    cin>>a>>b;

    if(a>b){
        cout<<"First number is the largest";
    }
    else{
        cout<<"second number is the largest";
    }
}


//2//
/*Given the radius of the circle, predict whether numerically the area of this circle is larger than the 
circumference or not.
Input 1: radius = 4
Output 1: Area is greater than circumference.
Explanation: area = 3.14 * 4 * 4 = 50.24 unit2
Perimeter = 2 * 3.14 * 4 = 25.12 unit
Therefore area > perimeter.*/

#include<iostream>
using namespace std;
int main(){
    cout<<"enter radius of circle";
    int r;
    cin>>r;
    float area = 3.14 * r * r;
    float cir = 3.14 * 2 * r;

    if(area>cir){
        cout<<"Area is greater than circumference";
    } 
    else{
        cout<<"circumference is greater than area";
    }
}


//3//
/*Any year is input through the keyboard. Write a program to determine whether the year is a leap year 
or not. (Considering leap year occurs after every 4 years)
Input 1: 1976
Output: yes
Input 2: 2003
Output: no*/

#include<iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    // leap year if perfectly divisible by 400
    if (year % 400 == 0) {
    cout << year << " is a leap year.";
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0) {
    cout << year << " is not a leap year.";
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0) {
    cout << year << " is a leap year.";
    }
    // all other years are not leap years
    else {
    cout << year << " is not a leap year.";
    }
    return 0;
}
    

//4//
/*Given the length and breadth of a rectangle, write a program to find whether numerically the area of 
the rectangle is greater than its perimeter.
Input 1: length = 5 breadth = 7
Output 1: Area is greater than perimeter.*/ 
#include<iostream>
using namespace std;
    int main(){
        int l,b;
        cout<<"enter length n breadth : "<<endl;
        cin>>l>>b;
        int area = l*b;
        int perimeter = 2*(l+b);

        if(area>perimeter){
            cout<<"area is greater";
        }
        else{
            cout<<"perimeter is greater";
        }
}
    

//5//
/*write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or 
isosceles triangle.
Input : side1 = 5 side2 = 4 side3 = 4
Output: This is an Isosceles triangle*/
#include<iostream>
using namespace std;

int main(){
    cout<<"enter 3 sides of triangle : ";
    int a,b,c;
    cin>>a>>b>>c;

    if(a==b && b==c && c==a){
        cout<<"EQUILATERAL";
    }
    else if(a==b || b==c || c==a){
        cout<<"ISOCELES";
    }
    else{
        cout<<"SCALENE";
    
    }
}

//6//
/*If the marks of A, B and C are input through the keyboard, write a program to determine the student 
scoring least marks.
Input 1: A = 23 , B = 34 , C = 71
Output : A scores the least marks*/
#include<iostream>
using namespace std;

int main(){
    cout<<"enter marks of 3 student : ";
    int a,b,c;
    cin>>a>>b>>c;

    if(a<b && a<c){
        cout<<a<<" is the least";
    }
    else if(b<a && b<c){
        cout<<b<<" is the least";
    }
    else{
        cout<<c<<" is the least";
    }
}

//7//
/*Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
Input 1: 2 0
Output 1: the point lies on the x - axis*/
#include<iostream>
using namespace std;

int main(){
    cout<<"enter the coordinate of point : ";
    int x,y;
    cin>>x>>y;

    if(x==0 && y==0){
        cout<<"ORIGIN";
    } 
    else if(x==0){
        cout<<"Y AXIS";
    }
    else if(y==0){
        cout<<"X AXIS";
    }
    else{
        cout<<"NOT ON AXIS";
    }
}

//8//
/*Given three points (x1, y1), (x2, y2) and
(x3, y3), write a program to check if all the three points fall on one straight line.
Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
Output 1: All 3 points lie on the same line*/
#include <iostream>
using namespace std;
int main() {
 float x1, y1, x2, y2, x3, y3, slope1, slope2;
 cout << "Enter points (x1, y1)" << endl;
 cin >> x1 >> y1;
 cout << "Enter points (x2, y2)" << endl;
 cin >> x2 >> y2;
 cout << "Enter points (x3, y3)" << endl;
 cin >> x3 >> y3;
 slope1 = (y2 - y1) / (x2 - x1);
 slope2 = (y3 - y2) / (x3 - x2);
 if (slope1 == slope2) {
 cout << "All 3 points lie on the same line";
 } else {
 cout << "All 3 points do not lie on the same line";
 }
 return 0;
}

//9//
/*Write a C++ program to input any character and check whether it is the alphabet, digit or special 
character.
Input 1: ch = ‘9’
Output 1: digit*/
#include<iostream>
using namespace std;
int main() {
 char ch;
 cout << "Enter any character : ";
 cin >> ch;
 // Alphabet checking condition
 if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
 cout << ch << " is an Alphabet";
 } else if (ch >= '0' && ch <= '9') {
 cout << ch << " is a Digit";
 } else {
 cout << ch << " is a Special Character";
 }
 return 0;
}

//10//
#include<iostream>
using namespace std;
int main() {
 int a = 500, b, c;
 if (a >= 400)
 b = 300;
 c = 200;
 cout << "value of b and c are respectively " << b << " and " << c;
 return 0;
}