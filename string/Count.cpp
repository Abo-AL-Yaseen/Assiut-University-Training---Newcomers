//Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

#include <cstdio>
#include <vector>
#include<iostream>
#include <algorithm>
#include <unordered_set>
#include<string>
using namespace std;

int main()
{
	string A;
	cin >> A;
	int sum = 0;
	for (int i = 0; i < A.size(); i++)
	{
		sum += A[i] - '0';
	}
	cout << sum;
}
