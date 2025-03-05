// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

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
	bool b = true;
	int j = s.size() - 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != s[j])
		{
			b = false;
			break;
		}
		j--;
	}
	if (b)
		cout << "YES" << endl;
	else
		cout << "NO";
}
