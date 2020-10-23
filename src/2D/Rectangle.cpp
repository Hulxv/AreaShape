#include "Rectangle.h"
#include <iostream>
#include <cmath>
using namespace std;

Rectangle::Rectangle()
{
    bool key;
    do
    {
        cout << "Enter the dimensions of the rectangle\n ";
        cout << "lenght ";
        cin >> lenght;
        cout << "width: ";
        cin >> width;
        if(lenght <= 0 || width <= 0)
        {
            cout << "\nError: value must great than 0\n\n";
            key = false;
        }
    }while (key == false);

}

float Rectangle::area()
{
    float area = lenght * width;
    return area;
}

Rectangle::~Rectangle()
{
    //dtor
}
