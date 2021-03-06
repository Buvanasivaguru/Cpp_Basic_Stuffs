// Cpp_Exp_Handling.cpp : Defines the entry point for the console application.
//

#include "Cpp_Exp_Handling.h"

using namespace std;

double divide(double a, double b) {
	if (b == 0)
		throw(b);
	else if (b <= 0 || a <= 0)
		throw "Exception! : unsigned values only acceptable";
	else
		cout << " a / b = " << (double) a / b << endl;
}

void null_exception(int * ptr, int p) {

	if (ptr == NULL)
		throw ptr;
	*ptr = p;
}

void my_except() {

	MyException d;
	throw d;
}

int main(void)
{
	try {
		cout << "Enter the Values... (a,b) " << endl;
		cin >> a >> b;
		while (cin.fail())					// to get interger only
		{
			cin.clear();					// clear input buffer to restore cin to a usable state
			cin.ignore(INT_MAX, '\n');		// ignore last input till new line
			cout << "Enter only numeric values..! Try again." << endl;
			cin >> a >> b;
		}
		
		divide(a, b);

		cout << "Enter the one the options... " << endl;
		cout << "1 for Null Exeception," << endl;
		cout << "2 for Bad Allocation," << endl;
		cout << "3 for User Defined Exception." << endl;
		cin >> i;

		switch (i)					// classify the Exceptions
		{
		case 1:
			null_exception(NULL, 0);		// null ptr exception
			break;
		case 2:
			arr = new int[500000000];		//bad allocation the myarr (more the maximum value)
			break;
		case 3:
			my_except();					// user defined exception
			break;
		default:
			cout << "Enter the valid selection: " << endl;
		}
				
	}
	catch (double i) {

	cerr << "Exception : Trying to divide by Zero (" << i << ")" << endl;
	}
	catch (const char * j) {
		cerr << j << endl;
	}
	catch (int * p) {

		cerr << "Exception : Null Pointer" << endl;

	}
	catch (exception& e)						// used defined and bad alloc catch
	{
		cout << "Standard exception: " << e.what() << endl;
	}

	return 0;
}
