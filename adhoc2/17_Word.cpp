#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/59/problem/A

int main() {
    cpu();
    string s; cin >> s;
    int lowers = 0;
    int n = s.size();
    for (int i=0; i<n; ++i)
        if (s[i] >= 97 && s[i] <= 122) ++lowers;
    
    for (int i=0; i<n; ++i) {
        if (lowers < n/2)
            if (s[i] <= 90 && s[i] >= 65)  s[i] += 32;
        else
            if (s[i] >= 97 && s[i] <= 122) s[i] -= 32;
    }

    cout << s << endl;
}