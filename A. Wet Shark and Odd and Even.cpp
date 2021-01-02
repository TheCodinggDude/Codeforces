#include <bits/stdc++.h>
 
using namespace std;
 
#define endl "\n"
 
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
 
#define pii pair<int,int>
#define pll pair<long long, long long>
 
#define mod 1000000007
#define inf 1000000000000000001;
 
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
 
#define eb emplace_back
#define f first
#define s second

void solve() {
	ll n , c = 0 , odd =0 , sum =0;
	cin>>n;
	vector<ll> a(n);
	for(ll i =0 ; i<n ; ++i) {
		cin>>a[i];
	}
	sort(a.begin() , a.end());
	for(ll i = n-1 ; i>=0 ; --i) {
		if(a[i]%2==0) {
			sum+=a[i];
		}
		else if(a[i]%2!=0) {
			c++;
			odd+=a[i];
			if(c == 2) {
				sum += odd;
				odd = 0;
				c = 0;
			}
		}
	}
	cout<<sum;
}
 
 
int main() {
	// cin.ignore(); must be there when using getline(cin, s)
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}