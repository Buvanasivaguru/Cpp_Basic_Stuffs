// Cpp_Exp_Handling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double divide(double a, double b){
	if (b == 0)
		throw(b);
	else if (b <= 0)
		throw "Exception! : Trying to divide by negative values";
	else
		cout << " a / b = " << a / b << endl;
}

void nullexcept(int * ptr, int p) {
	
	if (ptr == NULL)
		throw ptr;
	*ptr = p;
}

int main(void)
{
	try {
		double a, b;
		cout << "Enter the Values..." << endl;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		divide(a, b);
		nullexcept(NULL, 0);
   }
	catch (double i) {
		
		cerr << "Exception : Trying to divide by Zero (" << i << ")" << endl;
	}
	catch (const char * j) {
		cerr << j << endl;
	}
	catch (...) {

		cerr << "Exception : Null Pointer" << endl;

	}
	
	return 0;
}

