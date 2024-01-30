#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/734/problem/A

int main() {
    cpu();
    int n; cin >> n;
    string wins; cin >> wins;
    int A = 0, D = 0;
    for (int i=0; i<n; ++i) {
        if (wins[i] == 'A')  A++;
        else           D++;
    }
    
    if (A > D) cout << "Anton";
    else if (D > A) cout << "Danik";
    else cout << "Friendship";
}