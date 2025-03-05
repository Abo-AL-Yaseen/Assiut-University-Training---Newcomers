//Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

#include <cstdio>
#include <vector>
#include<iostream>
#include <algorithm>
#include <unordered_set>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, v, result;
        cin >> s >> v;
        int j = 0;
        for (int i = 0; i < max(s.size(), v.size()); i++)
        {
            if (i < s.size())
                result += s[i];
            if (j < v.size())
                result += v[j];
            j++;
        }

        cout << result << endl;
    }
}