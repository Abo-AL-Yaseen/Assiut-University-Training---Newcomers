//Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

#include <cstdio>
#include <vector>
#include<iostream>
#include <algorithm>
#include <unordered_set>
#include<string>
using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;
	cout << A.length() << " " << B.length() << endl;
	cout << A + B << endl;
	swap(A[0], B[0]);
	cout << A << " " << B;
}
