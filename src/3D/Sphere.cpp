#include "Sphere.h"
#include <iostream>
#include <cmath>
using namespace std;

    const double pi = 3.14159;
Sphere::Sphere()
{
    bool key;
    do
    {
        key = true;
        cout << "Enter the dimensions of Sphere\n";
        cout << "radius of sphere: ";
        cin >> radius;
        if(radius <= 0)
        {
            cout << "\nError: value must great than 0\n\n";
            key = false;
        }

    }while (key == false);


}

float Sphere::area()
{
    float area = 4 * pi * pow(radius, 2);
    return area;
}

Sphere::~Sphere()
{
    //dtor
}
