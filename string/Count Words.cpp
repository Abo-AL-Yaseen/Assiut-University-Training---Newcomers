//Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    if (s[0] >= 'a' && s[0] <= 'z' || s[0] >= 'A' && s[0] <= 'Z')
        count = 1;
    for (int i = 0; i < s.size() - 1; i++)
    {

        if (s[i] == ' ' || s[i] == '!' || s[i] == '.' || s[i] == '?' || s[i] == ',')
        {
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z' || s[i + 1] >= 'A' && s[i + 1] <= 'Z')
            {
                count++;
            }
        }
    }
    cout << count;
}