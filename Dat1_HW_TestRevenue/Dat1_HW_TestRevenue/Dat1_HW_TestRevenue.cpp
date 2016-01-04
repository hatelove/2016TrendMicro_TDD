// Dat1_HW_TestRevenue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <TestUtility.h>

int main()
{
	TestUtility Tester;
	Tester.ReloadTable();

	string TableRet;
	Tester.GetRevenueSet(4, TableRet);

	int nRet = -1;
	string TableExceptedRet = "{50}{66}{60}";
	if (TableRet == TableExceptedRet) {
		nRet = 0;
	}

	return nRet;
}

