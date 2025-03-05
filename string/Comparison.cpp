//Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/X


#include <cstdio>
#include <vector>
#include<iostream>
#include <algorithm>
#include <unordered_set>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string mini = s;
	for (int i = 1; i < s.size(); i++)
	{
		string x = s.substr(0, i);
		string y = s.substr(i, s.size() - i);

		sort(x.begin(), x.end());
		sort(y.begin(), y.end());
		string news = x + y;
		if (news < mini)
		{
			mini = news;
		}
	}

	cout << mini << endl;
}