#pragma once

#include "targetver.h"
#include <iostream>
//#include <stdio.h>

class Employee
{
private:
	const char * name;
	int emp_id;
	float exp;
	//int Acc_Num;

public:
	Employee(const char * t_name, int t_emp_id, float t_exp);
	void SetBasicInfo(const char * t_name, int t_emp_id);
	void SetExp(float t_exp);
	virtual void PrintDetails();
	~Employee();



};

/*
POINTS:
Initializer list
Base class default constructor is always called irresp of child class's non-def constructor.(can be overriden by init-list)
Virtual Functions(For Late-Binding)
Pure Virtual Functions
const char (For assigning like this :  const char * name="max"; )
Use 'public' access when inheriting. So, pointer type conversion from Derived to Base is made possible
Need to alloc and free char variables instead of const char.Also free via destructor
Need to re-compile with strict compilation




*/
