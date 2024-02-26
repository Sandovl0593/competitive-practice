#include <iostream>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

// https://codeforces.com/contest/732/problem/A

int main() {
    cpu();
    int k, r;
    cin >> k >> r;

    int i = 1;
    while (((k*i)-r) % 10 != 0 && 
            (k*i)    % 10 != 0)
        i++;

    cout << i << endl;
}