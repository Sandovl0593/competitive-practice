#include <iostream>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/791/problem/A

int main() {
    cpu();
    int l, b;
    cin >> l >> b; 
    int i = 0;
    while (l <= b) {
        l *= 3;  b *= 2;  ++i;
    }

    cout << i << endl;
}