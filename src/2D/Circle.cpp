#include "Circle.h"
#include <iostream>
#include <cmath>
using namespace std;




Circle::Circle()
{
    bool key;
    cout << "Enter the radius of the circle\n ";
    do
    {
        key = true;
        cin >> radius;
        if(radius <= 0)
        {
            cout << "\nError: value must great than 0\n\n";
            key = false;
        }
    }while(key == false);

}




float Circle::area()
{

    float area = pow(radius, 2) * pi;
    return area;
}

Circle::~Circle()
{
    //dtor
}
