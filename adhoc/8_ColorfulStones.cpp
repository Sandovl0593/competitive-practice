#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/265/problem/A

int main() {
    cpu();
    string stones; cin >> stones;
    string inst;  cin >> inst;
    int i = 0, j = 0;
    while (i < stones.size() && j < inst.size()) {
        if (inst[j] == stones[i]) ++i;
        ++j;
    }
    cout << i+1 << endl;
}