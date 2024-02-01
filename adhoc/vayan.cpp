#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,n;
    int ancho;
    cin>>n>>h;
    int p;
    for (int i=0 ; i<n;i++){
        cin>>p;
        if(h>=p){
          ancho+=1;
        }
        else{
            ancho+=2;

        }
    }
    cout<<ancho;
}