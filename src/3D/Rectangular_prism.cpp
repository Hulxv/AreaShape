#include "Rectangular_prism.h"
#include <iostream>
using namespace std;

Rectangular_prism::Rectangular_prism()
{
    bool key;
    do
    {
        key = true;
        cout << "Enter the dimensions of Rectangular prism\n";
        cout << "Length: ";
        cin >> length;
        cout << "width: ";
        cin >> width;
        cout << "height: ";
        cin >> height;
        if(length <= 0 || width <= 0 || height <= 0)
        {
            cout << "\nError: value must great than 0\n\n";
            key = false;
        }
    }while (key == false);


}

float Rectangular_prism::area()
{
     float area = 2 * (length + width + height);
     return area;

}

float Rectangular_prism::volume()
{
    float volume = length * width * height;
    return volume;
}
Rectangular_prism::~Rectangular_prism()
{

}
