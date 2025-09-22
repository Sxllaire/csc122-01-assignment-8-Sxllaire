//*************************************************************
//
//Danil Alieinikov
//H00880905
//CSC122-01
//
//I certify that this is my work and where appropriate an extension
//of the starter code provided by the assignment
//*************************************************************

#include <iostream>
#include "inputprot.h"
using namespace std;

int main() {
    cout << "Testing input validation library\n";

    // Range bounded both ends
    long grade = input_protect("Enter a grade (0-100): ",
                               "Invalid! Enter between 0 and 100.\n",
                               0L, 100L);
    cout << "You entered grade: " << grade << "\n";

    // Lower bound only
    double time = input_protect("Enter a time (>0): ",
                                "Invalid! Must be greater than 0.\n",
                                0.0);
    cout << "You entered time: " << time << "\n";

    // Upper bound only
    long maxAge = input_protect_upper("Enter an age (<=120): ",
                                      "Invalid! Must be less than or equal to 120.\n",
                                      120L);
    cout << "You entered age: " << maxAge << "\n";

    // Limited to list of values
    char choice = input_protect("Enter Y/N: ",
                                "Invalid
