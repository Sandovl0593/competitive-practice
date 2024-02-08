#include <iostream>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/268/problem/A

int main() {
    cpu();
    int n; cin >> n;
    int g[n][2];
    for (int i=0; i<n; ++i) 
        cin >> g[i][0] >> g[i][1];

    int count = 0;
    for (int i=0; i<n-1; ++i) {
        for (int j=i+1; j<n; ++j)
           if (g[i][0] == g[j][1])  ++count;
    }

    for (int i=0; i<n-1; ++i) {
        for (int j=i+1; j<n; ++j)
           if (g[i][1] == g[j][0])  ++count;
    }
}