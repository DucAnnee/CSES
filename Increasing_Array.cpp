#include <bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)
#define reloop(i,a,b) for (int i = a; i>= b; i--)
typedef long l;
typedef long long ll;
typedef unsigned long  ul;
typedef unsigned long long ull;
typedef double db;

int main(){
    ll a[1000000], n, move = 0;
    cin >> n;
    loop(i,0,n){
        cin >> a[i];
    }
    loop(i,1,n){
        if (a[i-1] > a[i]){
            while (a[i] < a[i-1]){
                a[i]++;
                move++;
            }
        }
    }
    cout << move;
}