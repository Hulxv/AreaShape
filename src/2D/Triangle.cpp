#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle()
{
    bool key;
    do
    {
        key = true;
        cout << "Enter the dimensions of the triangle\n ";
        cout << " height: ";
        cin >> height;
        cout << "  base: ";
        cin >> base;
        if(height <= 0 || base <= 0)
        {
            cout << "\nError: value must great than 0\n\n";
        key = false;
        }

    }while (key == false);

}

float Triangle::area()
{
    float area = 0.5 * base * height;
    return area;
}

Triangle::~Triangle()
{
    //dtor
}
