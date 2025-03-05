// Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H

#include <cstdio>
#include <vector>
#include<iostream>
#include <algorithm>
#include <unordered_set>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		bool b = false;
		for (int i = 0; i < s.size() - 2; i++)
		{
			if (s.substr(i, 3) == "101" || s.substr(i, 3) == "010")
			{
				b = true;
				break;
			}
		}
		if (b)
			cout << "Good" << endl;
		else
			cout << "Bad" << endl;

	}
}