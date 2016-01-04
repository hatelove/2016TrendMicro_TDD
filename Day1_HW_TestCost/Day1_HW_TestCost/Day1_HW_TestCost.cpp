// Day1_HW_TestCost.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <TestUtility.h>

int main()
{
	//這一段不容易從測試案例中得知需求的 scenario, 而且額外 depend on TestUtility, 應該有機會直接使用 Test Framework 來取代 TestUtility
	//可以避免 production code 其實是對的，但 testUtility 寫錯的機率跟風險。
	
	TestUtility Tester;
	Tester.ReloadTable();

	string TableRet;
	Tester.GetCostSet(3, TableRet);

	int nRet = -1;
	//比較集合跟比較字串的意義是不一樣的，這會影響到我們怎麼設計 production code 的 API
	//所以這邊如果設計成字串，是偷吃步的，是為了測試而測試，強制讓 production code 把需求跟商業邏輯的產出變成一個 string
	//如果外部呼叫端要使用這個結果，就還得自己 parsing 這個結果轉成 array，這樣是 bad smell, 代表這個方法不好用
	string TableExceptedRet = "{6}{15}{24}{21}";
	if (TableRet == TableExceptedRet) {
		nRet = 0;
	}

    return nRet;
}

