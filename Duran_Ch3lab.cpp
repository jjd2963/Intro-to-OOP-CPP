// This program gives the tax on the assessed value of a property
// from the original propety value.
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    // Declare variables for tax per $100, actual property value,
    // assessed property value, and total property tax as doubles.
    double property_value, assessed_value, property_tax, hundred_tax;
    const float assessed_percentage = .60;

    // Ask the user to input the original property value and tax per $100.
    cout << "Enter the actual property value: $";
    cin >> property_value;
    cout << "Enter the amount of tax per $100 of assessed value: $";
    cin >> hundred_tax;

    // Calculate the assessed value and total property tax.
    assessed_value = property_value * assessed_percentage;
    property_tax = assessed_value * (hundred_tax * .01); 

    // Display the actual property value, 
    // assessed property value, and total property tax.
    cout << setprecision(2);
    cout << "Property value: $" << fixed << property_value << endl;
    cout << "Assessed value: $" << fixed << assessed_value << endl;
    cout << "Property Tax: $" << fixed << property_tax << endl;
    return 0;
}