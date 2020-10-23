#include "Hemisphere.h"
#include <iostream>
#include <cmath>
using namespace std;


const double pi = 3.14159;

Hemisphere::Hemisphere()
{
    bool key;
    do
    {
        key = true;
        cout << "Enter the dimensions of Hemisphere\n";
        cout << "radius of circular base: ";
        cin >> radius;
        if(radius <= 0)
        {
            cout << "\nError: value must great than 0\n\n";
            key = false;
        }
    }while (key == false);

}
float Hemisphere::area()
{
    float area = 3 * pi * pow(radius, 2);
    return area;
}

Hemisphere::~Hemisphere()
{
    //dtor
}
