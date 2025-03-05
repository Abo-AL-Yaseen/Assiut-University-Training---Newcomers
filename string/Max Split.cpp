//Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string split;
    int l = 0; int r = 0;
    bool print = false;
    int count = 0;
    vector<string>v;
    for (char c : s)
    {
        if (c == 'L')
        {
            split += c;
            l++;
        }
        if (c == 'R')
        {
            split += c;
            r++;
        }
        if (l == r)
        {
            v.push_back(split);
            split = "";
            count++;
            l = 0;
            r = 0;
        }
    }
    cout << count << endl;
    for (string s : v)
    {
        cout << s << endl;
    }
}
