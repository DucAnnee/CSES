#include<bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for (ll i = a; i < b; i++)
#define reloop(i,a,b) for (ll i = a; i>= b; i--)
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma GCC optimize "trapv"
#define _GLIBCXX_DEBUG
#define ll long long int
#define ld long double
#define ull unsigned long long int  // ranges from (0 - twice of long long int)
#define pb push_back
#define pf push_front
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
	ll n, m, k, temp, count=0;
	vll desire, apartment_size;
	cin >> n >> m >> k;
	loop(i,0,n){
		cin >> temp;
		desire.pb(temp);
	}
	loop(i,0,m){
		cin >> temp;
		apartment_size.pb(temp);
	}
	sort(all(apartment_size));
	sort(all(desire));
	ll j=0;
	loop(i,0,n){
		while ((j < m) && (desire[i]-k > apartment_size[j])) j++;
		if (abs(desire[i] - apartment_size[j]) <= k) {
			count++;
			j++;
		}
	}
	cout << count;
}
