#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/59/problem/A

int main() {
    cpu();
    string s; cin >> s;
    string res = "";
    int lowers = 0;
    int n = s.size();
    for (int i=0; i<n; ++i) {
        if (s[i] >= 97 && s[i] <= 122) ++lowers;
    }
    
    for (int i=0; i<n; ++i) {
        if (lowers < n - lowers) {
            if (s[i] >= 97 && s[i] <= 122) res += (s[i] - 32);
            else    res += s[i];
        }
        else {
            if (s[i] <= 90 && s[i] >= 65)  res += (s[i] + 32);
            else    res += s[i];
        }
    }

    cout << res << endl;
}