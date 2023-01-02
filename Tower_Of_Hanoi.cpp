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

void tower_of_hanoi(int n, int from_rod, int aux_rod, int to_rod){
    if (n==1) {
        cout << from_rod << " " << to_rod << endl;
        return;
    }
    tower_of_hanoi(n-1, from_rod, to_rod, aux_rod);
    cout << from_rod << " " << to_rod << endl;
    tower_of_hanoi(n-1, aux_rod, from_rod, to_rod);
}

int main(){
    ll n;
    cin >> n;   
    cout << pow(2,n)-1 << endl;
    tower_of_hanoi(n, 1, 2, 3);
}