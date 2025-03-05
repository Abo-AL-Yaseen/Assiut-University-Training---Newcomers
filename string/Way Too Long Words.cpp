//Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string A;
		cin >> A;
		if (A.size() <= 10)
		{
			cout << A << endl;
		}
		else
		{
			cout << A[0] << A.size() - 2 << A.back() << endl;
		}
	}
}