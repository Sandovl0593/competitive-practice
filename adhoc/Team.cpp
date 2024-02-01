#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/231/problem/A

int main() {
    cpu();
    int n; cin >> n;
    int a1, a2, a3;
    int res = 0;
    for (int i=0; i<n; ++i) {
        cin >> a1 >> a2 >> a3;
        if ((!a1 & !a2 & a3) | (!a1 & a2 & !a3) | (a1 & !a2 & !a3) )  ++res;
    }
    cout << n-res << endl;
}


// 0 0 0    X
// 0 0 1    1    ~1 & ~2 & 3
// 0 1 0    1    ~1 & 2 & ~3
// 0 1 1    0
// 1 0 0    1    1 & ~2 & ~3
// 1 0 1    0
// 1 1 0    0
// 1 1 1    0
