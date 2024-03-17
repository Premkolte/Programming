#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int x, y;
    // friend Point dispoint(Point, Point);

public:
    Point();
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printPoint()
    {
        cout << "The Point is (" << x << "," << y << ")" << endl;
    }
    Point(Point p1, Point p2);
};
Point ::Point(Point p1, Point p2)
{
    int d =  sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));           // Formula for distance between points
    cout << "The Distance Between Two points is " << d << endl;
}


int main()
{
    Point p1(0, 1);  //User Can Change the numbers here  to check for different outputs
    p1.printPoint();

    Point p2(0, 6);  //User Can Change the numbers here  to check for different outputs
    p2.printPoint();

    Point p3(p1, p2);

    // p3.printPoint();

    return 0;
}

