#include <string>

using namespace std;

class SalseTable
{
public:
	virtual void ReloadTable();

public:
	void GetCostSet(int GroupNumber, string &Ret);
	void GetRevenueSet(int GroupNumber, string &Ret);

protected:
	string m_Table;
};