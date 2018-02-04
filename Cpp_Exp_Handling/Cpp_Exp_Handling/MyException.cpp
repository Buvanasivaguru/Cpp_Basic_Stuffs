
#include "MyException.h"

MyException::MyException()
{
}

const char* MyException::what() const throw()		//used defined exception (what definition) 
{
	return "My exception happened";
}

MyException::~MyException()
{
}

