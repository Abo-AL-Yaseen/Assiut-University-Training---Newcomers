//Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    int count[26] = { 0 };
 
    char ch;
    for (int i = 0; i < n; i++) {
        cin >> ch;
        count[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < count[i]; j++) {
            cout.put('a' + i);
        }
    }

    cout.put('\n');
    return 0;
}