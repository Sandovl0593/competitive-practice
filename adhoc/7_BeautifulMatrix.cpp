#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/263/problem/A

int A[5][5];

int main() {
    cpu();
    int res;
    for (int i=0; i<5; ++i)
        for (int j=0; j<5; ++j)
            cin >> A[i][j];

    for (int i=0; i<5; ++i)
        for (int j=0; j<5; ++j) {
            res = abs(j - 2) + abs(i -2);
            if (A[i][j]) {
                cout << res << endl;
                return 0;
            };
        }
}

// 4 3 2 3 4     0 -> 2
// 3 2 1 2 3     1 -> 1
// 2 1 0 1 2     2 -> 0
// 3 2 1 2 3     3 -> 1
// 4 3 2 3 4     4 -> 2