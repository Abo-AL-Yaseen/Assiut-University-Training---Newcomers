//Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int score = 0;
    int i = 0;

    while (i < s.size()) {
        if (s[i] == 'V') {
            score += 5;
        }
        else if (s[i] == 'W') {
            score += 2;
        }
        else if (s[i] == 'X' && i + 1 < s.size()) {
            i++; 
        }
        else if (s[i] == 'Y' && i + 1 < s.size()) {
            char newchar = s[i + 1];
            i++; 
            s.push_back(newchar); 
        }
        else if (s[i] == 'Z' && i + 1 < s.size()) {
            if (s[i + 1] == 'V') {
                score /= 5;
                i++; 
            }
            else if (s[i + 1] == 'W') {
                score /= 2;
                i++; 
            }
        }
        i++; 
    }

    cout << score;
    return 0;
}