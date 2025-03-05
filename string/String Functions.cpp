//Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L

#include <cstdio>
#include <vector>
#include<iostream>
#include <algorithm>
#include <unordered_set>
#include<string>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--)
    {
        string que;
        cin >> que;
        if (que == "substr")
        {
            int low, up;
            cin >> low >> up;
            low--;
            up--;
            long long maxi = max(low, up);
            long long mini = min(low, up);
            cout << s.substr(mini, maxi - mini + 1) << endl;
        }
        else if (que == "sort")
        {
            int low, up;
            cin >> low >> up;
            low--;
            up--;
            long long maxi = max(low, up);
            long long mini = min(low, up);
            sort(s.begin() + mini, s.begin() + maxi + 1);
        }
        else if (que == "pop_back")
        {
            s.pop_back();
        }
        else if (que == "back")
        {
            cout << s.back() << endl;
        }
        else if (que == "reverse")
        {
            int low, up;
            cin >> low >> up;
            low--;
            up--;
            long long maxi = max(low, up);
            long long mini = min(low, up);
            reverse(s.begin() + mini, s.begin() + maxi + 1);
        }
        else if (que == "front")
        {
            cout << s.front() << endl;
        }
        else if (que == "push_back")
        {
            char c;
            cin >> c;
            s.push_back(c);
        }
        else if (que == "print")
        {
            int pp;
            cin >> pp;
            cout << s[pp - 1] << endl;
        }


    }
}