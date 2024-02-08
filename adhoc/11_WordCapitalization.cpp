#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/281/problem/A

int main() {
    cpu();
    string s;  cin >> s;
    if (s[0] >= 97 && s[0] <= 122) s[0] -= 32;
    cout << s << endl;
}