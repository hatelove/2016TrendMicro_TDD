// Day1_HW_TestCost.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <TestUtility.h>

int main()
{
	TestUtility Tester;
	Tester.ReloadTable();

	string TableRet;
	Tester.GetCostSet(3, TableRet);

	int nRet = -1;
	string TableExceptedRet = "{6}{15}{24}{21}";
	if (TableRet == TableExceptedRet) {
		nRet = 0;
	}

    return nRet;
}

