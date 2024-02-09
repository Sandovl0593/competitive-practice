#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/731/problem/A

int main() {
    cpu();
    string s; cin >> s;
    char ch = 'a';
    int dist, rot = 0;
    for (int i=0; i<s.size(); ++i) {
        dist = abs(s[i] - ch);
        rot += (dist > 12)? (26-dist):dist;
        ch = s[i];
    }

    cout << rot << endl;
}

// a -> 97
// z -> 122

// a <- ... abs(s_{i-1} - s_i) ... -> z