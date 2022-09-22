//==========================================================================
//Author: Brendan Czekaj
//Date  : 10-20-20
//Desc  : This program will display a number menu to a user. The options will 
//        be different types of math functions that we perform on numbers.
//==========================================================================

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int option;
    double x, y, z;

    //Output to the screen.
    cout << "What would you like to do?" << endl;

    cout << "1.       " << "Add 2 numbers" << endl;
    cout << "2.       " << "Subtract 2 numbers" << endl;
    cout << "3.       " << "Multiply 2 numbers" << endl;
    cout << "4.       " << "Divide 2 numbers" << endl;
    //Getting user input.
    cout << "Please enter your selection: ";
    cin >> option;
    //This narrows the selection down to 1 through 4. The user must type 1 through 4 in.
    if (option < 1)
    {
        cout << endl;
        cout << "You broke my program. You need to enter a number between 1 and 4.";

    }
    else if (option > 4)
    {
        cout << endl;
        cout << "You broke my program. You need to enter a number between 1 and 4.";

    }
    //Start getting user input for equations.
    else
    {
        cout << endl;
        cout << "Enter the first number: ";
        cin >> x;

        cout << "Enter the second number: ";
        cin >> y;

        cout << endl;
        //depending on the user's input, the corresponding option will correlate to its function.
        //1 is addition. 2 is subtraction. 3 is multiplication. 4 is division.
        if (option == 1)
        {
            z = x + y;

            cout << "You chose to perform the following operation:" << endl;
            cout << x << " + " << y << " = " << z << endl;

            cout << "Thanks for using the program. Bye.";
        }
        if (option == 2)
        {
            z = x - y;

            cout << "You chose to perform the following operation:" << endl;
            cout << x << " - " << y << " = " << z << endl;

            cout << "Thanks for using the program. Bye.";
        }
        if (option == 3)
        {
            z = x * y;
            
            cout << "You chose to perform the following operation:" << endl;
            cout << x << " * " << y << " = " << z << endl;

            cout << "Thanks for using the program. Bye.";
        }
        if (option == 4)
        {
            if (y == 0)
            {
                cout << "You are tyring to break my program. You cannot divide by 0.";
            }
            else
            {
                z = x / y;

                cout << "You chose to perform the following operation:" << endl;
                cout << x << " / " << y << " = " << z << endl;

                cout << "Thanks for using the program. Bye.";
            }



        }
    }
    
}

