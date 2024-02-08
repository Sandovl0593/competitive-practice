#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/228/problem/A

int main() {
    cpu();
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<int> S;
    S.insert(s1);
    S.insert(s2);
    S.insert(s3);
    S.insert(s4);
    cout << 4 - S.size() << endl;
}