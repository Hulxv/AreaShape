#include "cylinder.h"
#include <iostream>
#include <math.h>

using namespace std;
cylinder::cylinder()
{
    bool key;
    do
    {
        key = true;
        cout << "Enter the dimensions of Cylinder\n";
        cout << "radius of circular base: ";
        cin >> radius;
        cout << "height of the cylinder: ";
        cin >> height;
        if(radius <= 0 || height <= 0)
        {
            cout << "\nError: value must great than 0\n\n";
            key = false;
        }
    }while (key == false);

}


float cylinder::area()
{
    float area = 2 * pi * radius * (radius + height);
    return area;
}

float cylinder::volume()
{
    float volume = pi * pow(radius , 2) * height;
    return volume;
}
cylinder::~cylinder()
{

}
