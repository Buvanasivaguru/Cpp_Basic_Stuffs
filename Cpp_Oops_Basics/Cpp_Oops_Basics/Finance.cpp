#include "stdafx.h"
#include "Finance.h"

using namespace std;

Finance::Finance(const char * name, int emp_id, float exp, unsigned long acc_no, 
															const char * pan_card, int salary): Employee(name,emp_id,exp)
																		
{
	cout << "Finance Created" << endl;
	this->acc_no = acc_no;
	this->pan_card = pan_card;
	this->salary = salary;
}

void Finance::SetAccNo(unsigned long t_acc_no)
{
	this->acc_no = t_acc_no;
}

const char * Finance::Getpan()
{
	return this->pan_card;
}

void Finance::SetSalary(int t_salary)
{
	this->salary = t_salary;
}

void Finance::PrintDetails()
{
	
	Employee::PrintDetails();
	cout << "=====[FROM FINANCE CLASS]=====" << endl;
	cout << "Account No : " << this->acc_no << endl;
	cout << "PAN Card : " << this->pan_card << endl;
	cout << "Salary : " << this->salary << endl;
	cout << "=================================" << endl;
}


Finance::~Finance()
{
	cout << "Finance Deleted" << endl;
}
