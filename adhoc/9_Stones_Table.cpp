#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/266/problem/A

int main() {
    cpu();
    int n; cin >> n;
    string s; cin >> s;
    set<char> only;

    for (const auto &el: s)
        only.insert(el);
    cout << s.size() - only.size() << endl;
}