#pragma once
#include "Employee.h"
class Department : public Employee
{
protected:
	const char * dept;
	const char * skill;

public:
	Department();
	void SetDept(const char * t_dept);
	void SetSkill(const char * t_skill);
	void PrintDeptDetails();

	~Department();
};

