#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/405/problem/A

int main() {
    cpu();
    int n; cin >> n;
    vector<int> s;
    s.resize(n);
    for (int i=0; i<n; ++i)  cin >> s[i];
    sort(s.begin(), s.end());
    
    for (int i=0; i<n; ++i)  cout << s[i] << ' ';
}