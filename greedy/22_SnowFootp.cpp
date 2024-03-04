#include <bits/stdc++.h>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/298/problem/A

int main() {
    cpu();
    int n; cin >> n;
    string road; cin >> road;

    // eleccion greedy: index first char no point.
    bool start = false;
    int s = 0,  step = 0;
    for (const char c: road) {
        if (c == '.') {
            if (!start) {s++;}
        }
        else if (c == 'R') {
            if (start) step++;
            else {
                step = ++s;
                start = true;
            }
        }
        else if (c == 'L')
            {if (start) step--;}
        cout << s << endl;
    }
    cout << s << " " << step << endl;
}