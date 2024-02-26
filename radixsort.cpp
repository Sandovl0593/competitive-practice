#include <iostream>
#include <cmath>
using namespace std;

#define cpu() {ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}

int digit(int w, int d, int base) {
    int q = w / pow(base, d);
    return q % base;
}

void countingSort(int* &arr, int d, int n) {
    int* temp = new int[n];
    int* count = new int[n];

    for (int j=0; j<n; ++j)   count[j] = 0;

    for (int j=0; j<n; ++j)   count[digit(arr[j], d, n)] ++;

    for (int j=1; j<n; ++j)   count[j] += count[j-1];  // crec
    // for (int j=n-2; j>=0; --j)   count[j] += count[j+1];  // decrec

    for (int j=0; j<n; ++j)   temp[ --count[digit(arr[j], d, n)] ] = arr[j];

    for (int j=0; j<n; ++j)   arr[j] = temp[j];

    delete temp, count;
}

void radixSort(int* &arr, int n, int k) {
    for (int i=0; i<k; i++)
        countingSort(arr, i, n);
}

int main() {
    cpu();
    int *A = new int[] {23, 27, 21, 30, 11, 15};  // range ϵ [0..n^k -1]
    int n = 6;  // k = 2
    radixSort(A, n, 2);

    for (int i=0; i<n; ++i)  cout << A[i] << " ";
    delete A;

    // Time: O(n) ¡OMG!
}