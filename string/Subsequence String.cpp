//Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool h = false;
    bool e = false;
    bool l = false;
    bool l2 = false;
    bool o = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'h' && !h)
            h = true;
        else if (s[i] == 'e' && h && !e)
            e = true;
        else if (s[i] == 'l' && e && !l)
            l = true;
        else if (s[i] == 'l' && l && !l2)
            l2 = true;
        else if (s[i] == 'o' && l2)
        {
            o = true;
            break;
        }
    }

    if (h && e && l && l2 && o)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}