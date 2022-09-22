===============================================================================
SimpleMenu
===============================================================================
-Output: 
cout << "What would you like to do?" << endl;

    cout << "1.       " << "Add 2 numbers" << endl;
    cout << "2.       " << "Subtract 2 numbers" << endl;
    cout << "3.       " << "Multiply 2 numbers" << endl;
    cout << "4.       " << "Divide 2 numbers" << endl;

-Then, we get user input:
cout << "Please enter your selection: ";
    cin >> option;

-Then narrow down user input to 1 through for with if statements: 
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

-If user input is good for 1 through 4, gather input for your x, y, and z numbers.

-If option 1 is selected:
	x + y = z

-If option 2 is selected:
	x - y = z

-If option 3 is selected:
	x * y = z

-If option 4 is selected:
	x / y = z


-Numbers for function are stored in variables. 

-Also, if the user divides a number by zero, the program will display:
	"You are tyring to break my program. You cannot divide by 0."

-Otherwise, the user inputted their function and the program tells the user thanks, bye.