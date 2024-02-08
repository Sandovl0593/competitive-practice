#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/677/problem/A

int main() {
    cpu();
    int n, h, ai;
    cin >> n >> h;

    int ans = 0;
    for (int i=0; i<n; ++i) {
        cin >> ai;
        if (ai > h) ans++;
        ans++;
    }
    cout << ans << endl;
}