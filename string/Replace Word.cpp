//Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V

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
	string rep = "EGYPT";
	for (int i = 0; i < s.size(); i++)
	{
		if (s.substr(i, 5) == rep)
		{
			s.erase(i, 4);
			s[i] = ' ';
		}
	}

	cout << s << endl;
}