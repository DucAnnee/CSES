#include <bits/stdc++.h>
using namespace std;

int main() {
    long int n;
    cin >> n;
    while (n != 1) {
        cout << n << " ";
        n % 2 == 0? (n = n/2) : (n = n*3 + 1);
    }
    cout << 1;
}