#include <iostream>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/427/problem/A

int main() {
    cpu();
    int n; cin >> n;
    int p, avail = 0, res = 0;
    for (int i=0; i<n; i++) {
        cin >> p;
        if (p == -1) {
            if (!avail)   ++res;
            else          --avail;
        } else
            avail += p;
    }
    cout << res;
}