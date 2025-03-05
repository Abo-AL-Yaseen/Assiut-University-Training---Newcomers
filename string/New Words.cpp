//Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U

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
	float count = 0;
	int e = 0;
	int g = 0;
	int p = 0;
	int y = 0;
	int t = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'E' || s[i] == 'e')
		{
			e++;
		}
		else if (s[i] == 'G' || s[i] == 'g')
		{
			g++;
		}
		else if (s[i] == 'y' || s[i] == 'Y')
		{
			y++;
		}
		else if (s[i] == 'P' || s[i] == 'p')
		{
			p++;
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			t++;
		}
		int x = min(e, g);
		int b = min(x, y);
		int z = min(b, p);
		int o = min(z, t);
		if (i == s.size() - 1)
		{
			cout << o << endl;
		}
	}
}