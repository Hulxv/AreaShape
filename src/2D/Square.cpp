#include "Square.h"
#include <iostream>
#include <cmath>
using namespace std;

Square::Square()
{
    bool key;
    do{


    key = true;
    cout << "Enter the side of the square\n ";
    cin >> t;
    if(t <= 0)
    {
            cout << "\nError: value must great than 0\n\n";
    key = false;
    }
    }while(key == false);
}




float Square::area()
{
    if (t > 0)
    {
        float area = pow(t, 2);
        return area;
    }
    else
    {
        cout << "Error: value must great than 0\n";
        return 0;
    }

}

Square::~Square()
{
    //dtor
}
