// This menu-driven program uses an if/else statement to carry out the
// number of seconds it takes for sound to travel through different mediums.
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
   // Constants for feet per seconds.
   const double air_speed = 1100.0;
   const double water_speed = 4900.0;
   const double steel_speed  = 16400.0;

   int choice;           // Menu choice
   int feet;             // Number of feet input
   double seconds;       // Number of seconds output

   	// Display the menu and get the user's choice
    cout << "This program will tell you how long it takes a sound wave\n";
    cout << "to travel a specific distance through a particular medium.\n\n";
    cout << "Select a substance for the sound to travel through:\n";
    cout << "\t1. Air\n";
    cout << "\t2. Water\n";
    cout << "\t3. Steel\n";
    cin >> choice;

    // Set the numeric output formatting
	cout << fixed << showpoint << setprecision(4);

	// Use the menu selection to execute the correct set of actions 
    if (choice == 1)
    {   cout << "Enter the number of feet the sound wave will travel: ";
        cin >> feet;
        seconds = feet / air_speed;
        cout << "The sound wave will travel " << feet;
        cout << " feet through water in " << seconds << " seconds." << endl;
    }
    else if (choice == 2)
    {   cout << "Enter the number of feet the sound wave will travel: ";
        cin >> feet;
        seconds = feet / water_speed;
        cout << "The sound wave will travel " << feet;
        cout << " feet through water in " << seconds << " seconds." << endl;
    }
    else if (choice == 3)
    {   cout << "Enter the number of feet the sound wave will travel: ";
        cin >> feet;
        seconds = feet / steel_speed;
        cout << "The sound wave will travel " << feet;
        cout << " feet through water in " << seconds << " seconds." << endl;
    }
    else
    {
        cout << "That is not a valid input.";
    }
    return 0;
}