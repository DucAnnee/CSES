#include <bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)
#define reloop(i,a,b) for (int i = a; i>= b; i--)
typedef long l;
typedef long long ll;
typedef unsigned long  ul;
typedef unsigned long long ull;
typedef double db;

bool even(int n){
    return (n%2==0);
}

int main(){
    ll n;
    cin >> n;
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    }
    else {
        for (int i=2; i <= n; i+=2){
            cout << i << ' ';
        }
        for (int i=1; i <= n; i+=2){
            cout << i << ' ';
        }   
    }
    
}