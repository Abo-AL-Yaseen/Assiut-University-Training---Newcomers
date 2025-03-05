// Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

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
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] == ',')
		{
			A[i] = ' ';
		}
		else if (A[i] >= 'A' && A[i] <= 'Z')
		{
			A[i] = A[i] + 32;
		}

		else if (A[i] >= 'a' && A[i] <= 'z')
		{
			A[i] = A[i] - 32;
		}

	}

	cout << A;
}