//Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string res;
    res += s[0];
    int index = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != res[index])
        {
            res += s[i];
            index++;
        }
    }
    cout << res.size() << endl;
}