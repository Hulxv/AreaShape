#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED


#include <iostream>
#include <string>

//2D ---------------
#include "Circle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "trapezium.h"
#include "Triangle.h"
// -----------------
//3D ---------------
#include "Cone.h"
#include "cube.h"
#include "cylinder.h"
#include "Hemisphere.h"
#include "Rectangular_prism.h"
#include "Sphere.h"
//------------------

using namespace std;

int numShape2D, numShape3D;


void S_2D(string s)
{
    bool calcKey2D;

    do
    {
       calcKey2D = true;

       cout << "Choose the shape whose area you want to calculate\n\n";
       cout << "1.Square\n";
       cout << "2.Circle\n";
       cout << "3.Triangle\n";
       cout << "4.Rectangle\n";
       cout << "5.parallelogram\n";
       cout << "6.trapezium\n\n";
       cin >> s;

       if (s == "1" || s == "square" || s == "Square" || s == "1.Square" || s == "1.square")
           numShape2D = 1;

       else if(s == "2" || s == "circle" || s == "Circle" || s == "2.circle" || s == "2.Circle")
           numShape2D = 2;

       else if (s == "3" || s == "triangle" || s == "Triangle" || s == "3.triangle" || s == "3.Triangle")
           numShape2D = 3;

       else if (s == "4" || s == "4.Rectangle" || s == "4.rectangle" || s == "Rectangle" || s == "rectangle")
           numShape2D = 4;

       else if (s == "5" || s == "5.parallelogram" || s == "5.Parallelogram" || s == "parallelogram" || s == "Parallelogram")
           numShape2D = 5;

       else if (s == "6" || s == "6.trapezium" || s == "6.Trapezium" || s == "trapezium" || s == "Trapezium")
           numShape2D = 6;
       else
       {
          cout << "Error: You must choose a shape\n";
          calcKey2D = false;
       }

   }while (calcKey2D == false);





}

void S_3D(string s)
{
    bool calcKey3D;
    do
    {
       calcKey3D = true;
       cout << "Choose the shape whose area you want to calculate\n\n";
       cout << "1.Cone\n";
       cout << "2.Cube\n";
       cout << "3.Cylinder\n";
       cout << "4.Hemisphere\n";
       cout << "5.Rectangular Prism\n";
       cout << "6.Sphere\n\n";
       cin >> s;

       if (s == "1" || s == "cone" || s == "Cone" || s == "1.Cone" || s == "1.cone")
           numShape3D = 1;

       else if(s == "2" || s == "Cube" || s == "cube" || s == "2.cube" || s == "2.Cube")
           numShape3D = 2;

       else if (s == "3" || s == "Cylinder" || s == "cylinder" || s == "3.cylinder" || s == "3.Cylinder")
           numShape3D = 3;

       else if (s == "4" || s == "4.Hemisphere" || s == "4.hemisphere" || s == "Hemisphere" || s == "hemisphere")
           numShape3D = 4;

       else if (s == "5" || s == "5.rectangular prism" || s == "5.Rectangular prism" || s == "rectangular prism" || s == "Rectangular prism" || s == "Rectangular Prism")
           numShape3D = 5;

       else if (s == "6" || s == "6.Sphere" || s == "6.sphere" || s == "sphere" || s == "Sphere")
           numShape3D = 6;
       else
       {
           cout << "Error: You must choose a shape\n";
           calcKey3D = false;
       }
   }while (calcKey3D == false);

}
void getArea2D()
{
    cout << "-----------------------------------------------------------------------------\n";
    cout << "*Warning: If you enter an input other than \n";
    cout << "numbers like (a, b, ^, @, #, ~, -, _) this may cause a problem. \n";
    cout << "-----------------------------------------------------------------------------\n\n";
    if (numShape2D == 1)
    {
        Square ob;
        cout << "Area = " << ob.area() << endl;
    }

    // ---------------------------------------------------------------

    else if (numShape2D == 2 )
    {
        Circle ob;
        cout << "Area = " << ob.area() << endl;
    }

    // ---------------------------------------------------------------

    else if (numShape2D == 3)
    {
        Triangle ob;
        cout << "Area = " << ob.area() << endl;
    }

    // ---------------------------------------------------------------

    else if (numShape2D == 4)
    {
        Rectangle ob;
        cout << "Area = " << ob.area() << endl;
    }

    // ---------------------------------------------------------------

    else if (numShape2D == 5)
    {
        Parallelogram ob;
        cout << "Area = " << ob.area() << endl;
    }

    // ---------------------------------------------------------------

    else if (numShape2D == 6)
    {
        Trapezium ob;
        cout << "Area = " << ob.area() << endl;;
    }

}

void getArea3D()
{
    cout << "-----------------------------------------------------------------------------\n";
    cout << "*Warning: If you enter an input other than \n";
    cout << "numbers like (a, b, ^, @, #, ~, -, _) this may cause a problem. \n";
    cout << "-----------------------------------------------------------------------------\n\n";

    if (numShape3D == 1)
    {
        Cone ob;
        cout << "Area = " << ob.area() << endl;
    }

    // ---------------------------------------------------------------

    else if (numShape3D == 2 )
    {
        cube ob;
        cout << "Area = " << ob.area() << endl;
    }

    // ---------------------------------------------------------------

    else if (numShape3D == 3)
    {
        cylinder ob;
        cout << "Area = " << ob.area() << endl;
    }

    // ---------------------------------------------------------------

    else if (numShape3D == 4)
    {
        Hemisphere ob;
        cout << "Area = " << ob.area() << endl;
    }

    // ---------------------------------------------------------------

    else if (numShape3D == 5)
    {
        Rectangular_prism ob;
        cout << "Area = " << ob.area() << endl;
    }

    // ---------------------------------------------------------------

    else if (numShape3D == 6)
    {
        Sphere ob;
        cout << "Area = " << ob.area() << endl;;
    }
}


#endif // FUNCTION_H_INCLUDED
