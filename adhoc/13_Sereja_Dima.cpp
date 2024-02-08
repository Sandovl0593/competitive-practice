#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/381/problem/A

int main() {
    cpu();
    int n, card; cin >> n;
    int S = 0, D = 0;
    vector<int> cards;
    cards.resize(n);
    for (int i=0; i<n; ++i)    cin >> cards[i];

    sort(cards.begin(), cards.end());
    int b = (n % 2 == 0)? 0 : 1;
    for (int i=n-1; i>=b; i-=2) {
        S += cards[i];
        D += cards[i-1];
    }
    if (b)  S += cards[0];
    cout << S << ' ' << D << endl;
}