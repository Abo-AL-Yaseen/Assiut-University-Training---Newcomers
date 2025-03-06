#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<long long> cost(26);
    for (int i = 0; i < 26; i++)
    {
        cin >> cost[i];
    }
    long long question = 0;

    for (int i = 0; i < s.size(); i++)
    {
        question = 0;
        if (s[i] == '?')
        {
            for (int j = i; j < s.size(); j++)
            {
                if (s[j] == '?')
                    question++;
                else
                    break;
            }

            if (question == s.size())
            {
                cout << 0 << endl;
                for (int j = 0; j < s.size(); j++)
                {
                    cout << "a";
                }
                return 0;
            }
            else
            {
                if (i == 0)
                {
                    long long minVal = LLONG_MAX, index;
                    for (int z = 0; z < (s[question] - 'a') + 1; z++)
                    {
                        long long current = abs(cost[s[question] - 'a'] - cost[z]);
                        if (minVal > current)
                        {
                            minVal = current;
                            index = z;
                        }
                    }
                    char replace = index + 'a';
                    for (int j = 0; j < question; j++)
                    {
                        s[j] = replace;
                    }

                    i += question;
                }
                else if (i + question == s.size())
                {
                    long long minVal = LLONG_MAX, index;
                    for (int z = 0; z < (s[i - 1] - 'a') + 1; z++)
                    {
                        long long current = abs(cost[s[i - 1] - 'a'] - cost[z]);
                        if (minVal > current)
                        {
                            minVal = current;
                            index = z;
                        }
                    }
                    char replace = index + 'a';
                    for (int j = i; j < question + i; j++)
                    {
                        s[j] = replace;
                    }
                    break;
                }
                else
                {
                    long long minVal = LLONG_MAX, index;
                    for (int x = 0; x < 26; x++)
                    {
                        long long current = abs(cost[s[i - 1] - 'a'] - cost[x]) + abs(cost[x] - cost[s[i + question] - 'a']);
                        if (minVal > current)
                        {
                            minVal = current;
                            index = x;
                        }
                    }
                    char replace = index + 'a';
                    for (int j = i; j < i + question; j++)
                    {
                        s[j] = replace;
                    }
                    i += question;
                }
            }
        }
    }

    long long finalCost = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        finalCost += abs(cost[s[i] - 'a'] - cost[s[i + 1] - 'a']);
    }

    cout << finalCost << endl;
    cout << s << endl;
}
