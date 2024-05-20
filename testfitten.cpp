#include <iostream>
#include <cmath>

using namespace std;

int main()         // main function
{                 // start of main function code
    double x, y, z; // declare variables x, y, z
    cout << "Enter three numbers: "; // prompt user to enter three numbers    
    cin >> x >> y >> z; // read three numbers from user
    double a = (x + y + z) / 3; // calculate the average of x, y, and z
    double s = sqrt((x - a) * (x - a) + (y - a) * (y - a) + (z - a) * (z - a)); // calculate the standard deviation
    cout << "The average is " << a << endl; // display the average
    cout << "The standard deviation is " << s << endl; // display the standard deviation
    return 0; // return 0 to indicate successful execution of the program
} // end of main function code    