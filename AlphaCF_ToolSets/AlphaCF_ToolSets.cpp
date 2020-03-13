// AlphaCF_ToolSets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AlphaCFLog.h"

using namespace AlphaCF;

void TestLogOutput(const wchar_t* info)
{
	std::wcout << info;
}


int main()
{
	//Example for Test EasyLog
	EasyLog::mst_callback4Output = TestLogOutput;
	EasyLog() << "The input number is " << 5.6 << '\n' << endl;
	EasyLog::eLog << "The input number2 is " << 6.8 << '\n' << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
