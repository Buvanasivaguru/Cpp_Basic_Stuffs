//#include "stdafx.h"
#include "Employee.h"
#include <iostream>

using namespace std;


Employee::Employee(const char * t_name, int t_emp_id, float t_exp)
{
	this->name = t_name;
	this->emp_id = t_emp_id;
	this->exp = t_exp;
	cout << endl;
	cout << "Empolyee Created" << endl;
}

void Employee::SetBasicInfo(const char * t_name, int t_emp_id)
{
	name = t_name;
	this->emp_id = t_emp_id;
}

//Experience in years
void Employee::SetExp(float t_exp)
{
	this->exp = t_exp;
}


void Employee::PrintDetails()
{
	cout << "Details are : " << endl;
	cout << "===[FROM EMPLOYEE CLASS]====" << endl;
	cout << "Name : " << this->name << endl;
	cout << "Employee ID : " << this->emp_id << endl;
	cout << "Experience (in Years) : " << this->exp << endl;
	cout << "-----------------------" << endl;

}

Employee::~Employee()
{
	cout << "Empolyee Deleted" << endl;
}
