#include "Parallelogram.h"
#include <iostream>
#include <cmath>
using namespace std;

Parallelogram::Parallelogram()
{
    bool key;
    do
    {
        key = true;
        cout << "Enter the dimensions of the parallelogram\n ";
        cout << "vertical height: ";
        cin >> height;
        cout << "base: ";
        cin >> base;
        if(height <= 0 || base <= 0)
        {
            cout << "\nError: value must great than 0\n\n";
        key = false;
        }
    }while (key == false);


}

float Parallelogram::area()
{
    float area = height * base;
    return area;
}
Parallelogram::~Parallelogram()
{
    //dtor
}
