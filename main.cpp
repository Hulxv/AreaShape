#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

//--------------------------------------------------------------
// This Project by Mohamed Emad
//--------------------------------------------------------------



    string s3D, s2D, dim; // the choose user
    bool calcKey, key; // keys
    string k;


int main()
{

    do
    {

    	do
    	{
   		    calcKey = true;

   		    cout << "Choose the dimensions \n ";
    		cout << "2D\n";
   		    cout << " 3D\n ";
   		    cin >> dim;
   		    if(dim == "3d" || dim == "3D")
  		    {
  		         S_3D(s3D);
  		         getArea3D();
   		    }
		    else if(dim == "2d" || dim == "2D")
		    {
		        S_2D(s2D);
		        getArea2D();
		    }
		    else
		    {
		        cout << " You must choose the number of dimensions for the shape\n";
		        cout << " Try again\n\n ";
		        calcKey = false;
		    }


		}while (calcKey == false);

		// End loop do-while



		for(int i = 1 ;i > 0; i++)
        {
            cout << "Contiune ? y/n \n";
            cin >> k;

			if (k == "y")
			{
				key = true;
				i = -1;
				cout  << "\n\n";
			}
			else if (k == "n")
			{
				key = false;
				i = -1;
				cout << "\n\n - End - \n";
			}
			else
			{
			    cout << "You must Choose 'y' or 'n' \n";
			    i = 1;
			}

		}
    }while(key == true);

return 0;
}
