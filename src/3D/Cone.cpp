#include "Cone.h"
#include <iostream>

using namespace std;


Cone::Cone()
{
    bool key ;
    do
    {
        key = true;
        cout << "Enter the dimensions of cone\n";
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

float Cone::area()
{

    float area = pi * radius * (radius * height);
    return area;
}

Cone::~Cone()
{

}
