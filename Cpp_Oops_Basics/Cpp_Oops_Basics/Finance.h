#pragma once
#include"Employee.h"

class Finance :public Employee
{
private:
	unsigned long acc_no;
	const char * pan_card;
	int salary;
public:
	Finance(const char * name, int emp_id, float exp, unsigned long acc_no, const char * pan_card, int salary);
	void SetAccNo(unsigned long t_acc_no);
	const char *Getpan();
	void SetSalary(int t_salary);
	void PrintDetails();
	~Finance();
};

