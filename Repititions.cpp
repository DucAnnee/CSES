#include <bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)
#define reloop(i,a,b) for (int i = a; i<= b; i++)
typedef long l;
typedef long long ll;
typedef unsigned long  ul;
typedef unsigned long long ull;
typedef double db;

int main(){
    string strain;
    getline(cin, strain);
    int count = 0, max_count = 1;
    char m = 'A';
    for(char a:strain){
        if (a == m) {
            count++;
        }
        else {
            count =1;
            m = a;
        }
        max_count = max(max_count,count);
    }
    cout << max_count;
}