#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/112/problem/A

int main() {
    cpu();
    string w1, w2;
    cin >> w1;
    cin >> w2;
    int l = w1.size(), res = 0;
    for (int i=0; i<l; ++i) {
        if (w1[i] <= 90 && w1[i] >= 65)  w1[i] += 32;
        if (w2[i] <= 90 && w2[i] >= 65)  w2[i] += 32;
        if (w1[i] > w2[i]) {
            res = 1;  break;
        }
        else if (w1[i] < w2[i])  {
            res = -1;  break;
        }
    }
    cout << res << endl;
}