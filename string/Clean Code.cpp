//Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Z

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
	bool startMultiComment = false;
	while (getline(cin, s))
	{
		bool isnotcoment = false;
		if (s.empty() || s == " ")
			continue;
		
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '/' && s[i + 1] == '/' && !startMultiComment)
				break;
			else if (s[i] == '/' && s[i+1] == '*' && !startMultiComment)
			{
				i++;
				startMultiComment = true;
			}
			else if (s[i] == '*' && s[i+1] == '/' && startMultiComment)
			{
				i++;
				startMultiComment = false;
			}
			else if (!startMultiComment)
			{
				cout << s[i];
				isnotcoment = true;
			}
		}
		if (isnotcoment && !startMultiComment)
			cout << endl;
	}
}