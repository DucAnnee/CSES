#include<bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)
#define reloop(i,a,b) for (int i = a; i>= b; i--)
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma GCC optimize "trapv"
#define _GLIBCXX_DEBUG
#define ll long long int
#define ld long double
#define ull unsigned long long int  // ranges from (0 - twice of long long int)
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define mod 1000000007LL
#define llpair pair<ll,ll>
#define INF 1000000000000000000ll
#define np next_permutation
#define PI acos(-1)
#define deb(x) cout<<#x<<" "<<x<<endl;
#define rotate_left(vec,amt) rotate(vec.begin(),vec.begin()+amt,vec.end());
#define rotate_right(vec,amt) rotate(vec.begin(),vec.begin()+vec.size()-amt,vec.end());
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define clr(x) memset(x,0,sizeof(x))
static int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
static int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int main(){
    ull n, a[1000000], s=0, sum, a1[1000000];
    bool possible;
    cin >> n;
    sum = (n*(n+1)/2);
    loop(i,0,n){
        a[i] = i+1;
    }
    if (sum%2==0) {
        cout << "YES" << endl;
        possible = true;
    }
    else {
        cout << "NO";
        possible = false;
    }
    if (possible==true){
        if (n%2==0){
            cout << n/2 << endl;
            loop(i,0,n/4){
                cout << a[i] << " " << a[n-1-i] << " ";
            }
            cout << endl << n/2 << endl;
            loop(i,n/4,n/2){
                cout << a[i] << " " << a[n-1-i] << " ";
            }
        }
        else {
            if (n==3) {
                cout << 1 << endl << 3 << endl << 2 << endl << 2 << " " << 1;
            }
            else {
                ll temp = 0, index;
                ll required = n*(n+1)/4;
                cout << (n-1)/2 << endl;
                loop(i,0,n/4){
                    temp += (a[i] + a[n-1-i]);
                    if ((temp + a[i+1] + a[n-2-i]) >= required) {
                        index = i;
                        cout << a[n-2-i] << " ";
                    }
                    cout << a[i] << " " << a[n-i-1] << " ";
                }
                cout << endl << (n-1)/2+1 << endl;
                loop(i,index+1,(n-index-2)){
                    cout << a[i] << " ";
                }
            }
        }
    }
}
