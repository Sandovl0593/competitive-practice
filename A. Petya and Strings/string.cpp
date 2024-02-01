#include <bits/stdc++.h>
using namespace std;
int main() {
    string pala1="",pala2="";

    cin >> pala1;
    cin >> pala2;
    std::transform(pala1.begin(), pala1.end(), pala1.begin(), ::tolower);
    std::transform(pala2.begin(), pala2.end(), pala2.begin(), ::tolower);

    for (int i = 0; i < pala2.length(); i++) {

        if (pala1[i] > pala2[i]) {
            cout << 1;
            break;
        } else if (pala1[i] < pala2[i]) {
            cout << -1;
            break;
        } else if (i == pala2.length() - 1) {
            cout << 0;
        }
    }

}