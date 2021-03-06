// Cpp_Oops_Basics.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "Employee.h"
#include "Finance.h"
//#include "Department.h"

using namespace std;

int main(void)
{
	//Finance class instance
	const char * name = "Buvan";
	int emp_id = 004;
	float exp = 3.1;
	unsigned long acc_no = 3133047568;
	const char * pan_card = "BLPK12536";
	int salary = 1500;
	
	//Base class pointer
	Employee * emp;
	Finance fin(name, emp_id, exp, acc_no,pan_card, salary);
	emp = &fin;
	emp->PrintDetails();

	cout << " ********END OF MAIN**********" << endl;

	getchar();
	return 0;
}



