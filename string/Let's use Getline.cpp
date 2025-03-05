//## Problem 1: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B


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
	getline(cin, s);
	int siz = s.length();
	int x = s.find("\\");
	s.erase(x, siz - x);
	cout << s;
}