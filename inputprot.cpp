//*************************************************************
//
//Danil Alieinikov
//H00880905
//CSC122-01
//
//I certify that this is my work and where appropriate an extension
//of the starter code provided by the assignment
//*************************************************************

#include "inputprot.h"
#include <iostream>
#include <limits>
#include <cctype>
using namespace std;

// this to clean invalid input
void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Both Bounds
long input_protect(const string& prompt, const string& error, long lower, long upper) {
    long value;
    cout << prompt;
    while (!(cin >> value) || value < lower || value > upper) {
        cout << error;
        clearInput();
        cout << prompt;
    }
    clearInput();
    return value;
}

double input_protect(const string& prompt, const string& error, double lower, double upper) {
    double value;
    cout << prompt;
    while (!(cin >> value) || value < lower || value > upper) {
        cout << error;
        clearInput();
        cout << prompt;
    }
    clearInput();
    return value;
}
// Lower Bound
long input_protect(const string& prompt, const string& error, long lower) {
    long value;
    cout << prompt;
    while (!(cin >> value) || value < lower) {
        cout << error;
        clearInput();
        cout << prompt;
    }
    clearInput();
    return value;
}

double input_protect(const string& prompt, const string& error, double lower) {
    double value;
    cout << prompt;
    while (!(cin >> value) || value < lower) {
        cout << error;
        clearInput();
        cout << prompt;
    }
    clearInput();
    return value;
}

// Upper Bound
long input_protect_upper(const string& prompt, const string& error, long upper) {
    long value;
    cout << prompt;
    while (!(cin >> value) || value > upper) {
        cout << error;
        clearInput();
        cout << prompt;
    }
    clearInput();
    return value;
}

double input_protect_upper(const string& prompt, const string& error, double upper) {
    double value;
    cout << prompt;
    while (!(cin >> value) || value > upper) {
        cout << error;
        clearInput();
        cout << prompt;
    }
    clearInput();
    return value;
}

// Char List
char input_protect(const string& prompt, const string& error, const string& validChars) {
    char value;
    cout << prompt;
    while (!(cin >> value) || validChars.find(value) == string::npos) {
        cout << error;
        clearInput();
        cout << prompt;
    }
    clearInput();
    return value;
}
