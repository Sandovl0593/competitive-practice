#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/236/problem/A

int main() {
    cpu();
    string input; cin >> input;
    set<char> lets;
    for (const auto &s: input)
        lets.insert(s);

    if (lets.size() % 2 != 0) cout << "IGNORE HIM!";
    else                      cout << "CHAT WITH HER!";
}