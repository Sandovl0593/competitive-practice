#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/266/problem/A

int main() {
    cpu();
    int n; cin >> n;
    string s; cin >> s;
    int i=0, j=1, res = 0;

    for (int i=0; i<n-1; ++i) {
        if (s[i] == s[i+1])   ++res;
    }
    cout << res << endl;
}