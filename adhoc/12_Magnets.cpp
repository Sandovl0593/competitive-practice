#include <iostream>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/344/problem/A

int main() {
    cpu();
    int n; cin >> n;
    int iman, init, g = 1;
    cin >> init;
    for (int i=1; i<n; ++i) {
        cin >> iman;
        if (init != iman)  {
            ++g;  init = iman;
        }
    }
    cout << g << endl;
}
