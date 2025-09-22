//*************************************************************
//
//Danil Alieinikov
//H00880905
//CSC122-01
//
//I certify that this is my work and where appropriate an extension
//of the starter code provided by the assignment
//*************************************************************

#ifndef INPUTPROT_H
#define INPUTPROT_H

#include <string>
using namespace std;

// Both bounds
long input_protect(const string& prompt, const string& error, long lower, long upper);
double input_protect(const string& prompt, const string& error, double lower, double upper);

// Lower bound
long input_protect(const string& prompt, const string& error, long lower);
double input_protect(const string& prompt, const string& error, double lower);

// Upper bound
long input_protect_upper(const string& prompt, const string& error, long upper);
double input_protect_upper(const string& prompt, const string& error, double upper);

char input_protect(const string& prompt, const string& error, const string& validChars);

#endif
