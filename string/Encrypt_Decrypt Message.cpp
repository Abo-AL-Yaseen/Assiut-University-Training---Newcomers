//Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W


#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int Q;
    string S;
    cin >> Q >> S;

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    unordered_map<char, char> encrypt_map, decrypt_map;

    for (size_t i = 0; i < original.size(); i++) {
        encrypt_map[original[i]] = key[i];
        decrypt_map[key[i]] = original[i];
    }

    for (char& c : S) {
        cout << (Q == 1 ? encrypt_map[c] : decrypt_map[c]);
    }

}