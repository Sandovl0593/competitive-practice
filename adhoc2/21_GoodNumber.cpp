#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/365/problem/A

int main() {
    cpu();
    int n, k, ins;
    string sg;
    cin >> n >> k;
    set<int> *inc = new set<int>; 
    bool noexc = true;

    int count = 0;
    for (int i=0; i < n; ++i) {
        cin >> sg;
        for (int j=0; j<sg.size(); ++j) {
            ins = sg[j] - '0';
            if (ins > k)  noexc = false;
            inc->insert(ins);
        }
        if (noexc && inc->size() == k+1)  count++;
        delete inc;
        inc = new set<int>;
    }

    cout << count << endl;
}