#include "stdafx.h"
#include "Department.h"

using namespace std;

Department::Department()
{
	cout << "Department Created" << endl;
}

void Department::SetDept(char * t_dept)
{
	this->dept = t_dept;
}

void Department::SetSkill(char * t_skill)
{
	this->skill = t_skill;
}

void Department::PrintDeptDetails()
{
	cout << "Department : " << this->dept << endl;
	cout << "Skill : " << this->skill << endl;
}


Department::~Department()
{
	cout << "Department Deleted" << endl;
}
