// This is the main DLL file.

#include "stdafx.h"
#include "managedDllWrapper.h"

#include "E:\ProgrammingProjects\ProjectsVS_cSharp\test_C_sharp\Cee_dll_test\Cee_dll_test\MathFunctions.h"
#include "E:\ProgrammingProjects\ProjectsVS_cSharp\test_C_sharp\Cee_dll_test\Cee_dll_test\MathFunctions.cpp"

// Constructor implementaion
CppWrapper::MyMathFuncsWrapper::MyMathFuncsWrapper()
{
	initVal = 20.0;
	myCppClass = new MyMathFuncs(); //initiate C++ class's instance
}

double CppWrapper::MyMathFuncsWrapper::AddWrapper(double a, double b)
{
	return myCppClass->Add(a, b);
}

double CppWrapper::MyMathFuncsWrapper::SubtractWrapper(double a, double b)
{
	return myCppClass->Subtract(a, b);
}

double CppWrapper::MyMathFuncsWrapper::MultiplyWrapper(double a, double b)
{
	return myCppClass->Multiply(a, b);
}

double CppWrapper::MyMathFuncsWrapper::DivideWrapper(double a, double b)
{
	return myCppClass->Divide(a, b);
}

