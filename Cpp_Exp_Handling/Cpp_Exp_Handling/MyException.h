#pragma once

#include "stdafx.h"
#include <iostream>
#include <exception>				// basic exceptions provided by exception class

using namespace std;

class MyException : public exception
{
public:
	MyException();
	~MyException();
	virtual const char* what() const throw();	// what() virtual function definition
};

