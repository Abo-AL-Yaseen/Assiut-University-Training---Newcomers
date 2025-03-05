//Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

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
	char c = 'a';
	int count = 0;
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == c)
				count++;

		}
		if (count != 0)
		{
			cout << c << " : " << count << endl;
		}
		c++;
		count = 0;
	}
}