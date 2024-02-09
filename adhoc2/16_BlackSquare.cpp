#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/431/problem/A

int main() {
    cpu();
    int cal[4];
    cin >> cal[0] >> cal[1] >> cal[2] >> cal[3];
    string ins; cin >> ins;

    int sum = 0, i;
    for (const auto& c: ins) {
        i = (c - '0');
        sum += cal[i-1];
    }
    cout << sum;
}