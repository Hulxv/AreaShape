#include "cube.h"
#include <iostream>
#include <cmath>
using namespace std;
cube::cube()
{
    bool key;
    do
    {
        key = true;
        cout << "Enter the Dimensions of a cube\n";
        cout << "length of edge: ";
        cin >> t;
        if(t <= 0)
        {
            cout << "\nError: value must great than 0\n\n";
            key = false;
        }
    }while (key == false);
}

float cube::area()
{

    float area = 6 * pow(t, 2);
    return area;
}

float cube::volume()
{
    float volume = pow(t , 3);
    return volume;
}

cube::~cube()
{

}
