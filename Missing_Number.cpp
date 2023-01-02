#include <bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for (int i = a; i< b; i++)
#define reloop(i,a,b) for (int i = a; i<= b; i++)
typedef long l;
typedef long long ll;
typedef unsigned long  ul;
typedef unsigned long long ull;
typedef double db;



int main(){
    ll n;
    cin >> n;
    ll sum = 0;
    loop(i,1,n){
        int m;
        cin >> m;
        sum += m;
    }
    cout << (n*(n+1)/2) - sum;
}