#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 2;

    cout << x + y << endl;

    cout << x - y << endl;

    cout << x * y << endl;

    cout << x / y << endl; // answer should have been 2.5 but since out data type is "int" so it takes GIF(greatest interger number)


    //INCREMENT AND DECREMENT

    //{
        x++; // POST increament
        cout << x << endl;

        ++x; // PRE increament
        cout << x << endl;
    //}

    // MAGIC
    //{
        int z = 1;
        cout<<++z<<endl; // PRE increament
        
        int a = 2;
        cout<<a++<<endl; // POST increament
    //}

    //{
        int b = 2;
        cout<<--b<<endl; // PRE increament
        
        int d = 1;
        cout<<d--<<endl; // POST increament
    //}
}