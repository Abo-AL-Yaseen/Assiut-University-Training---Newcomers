//Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string res;
    string word;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (!res.empty())
            res += ' ';
        res += word;
    }


    cout << res;

}