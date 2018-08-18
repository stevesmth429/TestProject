// managedDllWrapper.h

#pragma once

#include "E:\ProgrammingProjects\ProjectsVS_cSharp\test_C_sharp\Cee_dll_test\Cee_dll_test\MathFunctions.h"
#include "E:\ProgrammingProjects\ProjectsVS_cSharp\test_C_sharp\Cee_dll_test\Cee_dll_test\MathFunctions.cpp"

using namespace System;

namespace CppWrapper {
	public ref class MyMathFuncsWrapper
	{
	public:
		// constructor
		MyMathFuncsWrapper();

		// wrapper methods
		double AddWrapper(double a, double b);
		double SubtractWrapper(double a, double b);
		double MultiplyWrapper(double a, double b);
		double DivideWrapper(double a, double b);

		// public variable
		double initVal;

	private:
		MyMathFuncs *myCppClass; // an instance of class in C++
	};

}
