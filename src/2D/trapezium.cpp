#include "trapezium.h"
#include <iostream>
#include <cmath>
using namespace std;

Trapezium::Trapezium()
{
    bool key;
    do
    {
    cout << "Enter the dimensions of the trapezium\n ";
    cout << "base1: ";
    cin  >> base1;
    cout << "base2: ";
    cin >> base2;
    cout << "height: ";
    cin >> height;
    if(height <= 0 || base1 <= 0 || base2 <= 0)
    {
            cout << "\nError: value must great than 0\n\n";
    key = false;
    }
    }while(key == false);


}

float Trapezium::area()
{
    float  area = 0.5 * (base1 + base2) * height;
    return area;
}

Trapezium::~Trapezium()
{
    //dtor
}
