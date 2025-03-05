//Link:https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T

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
	auto it = find(s.begin(), s.end(), '?');
	int start = distance(s.begin(), it);
	vector<string>v;
	int low;
	int up;
	int count = 0;
	for (int i = start + 1; i < s.size(); i++)
	{
		if (s[i] == '=')
			low = i + 1;
		if (count == 4 && low != 0)
		{
			v.push_back(s.substr(low, (s.size()) - low));
		}
		if (s[i] == '&')
		{
			up = i;
			v.push_back(s.substr(low, up - low));
			low = 0; up = 0;
			count++;
			continue;
		}

	}

	cout << "username: " << v[0] << endl;
	cout << "pwd: " << v[1] << endl;
	cout << "profile: " << v[2] << endl;
	cout << "role: " << v[3] << endl;
	cout << "key: " << v[4] << endl;

}