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
#define all(c) c.begin(),c.end()
 
#define eb emplace_back
#define f first
#define s second

void solve() {
	int t;
	cin>>t;
	while(t--) {
		int n , k;
		cin>>n>>k;
		string ans = "";
		int pallenlength = k;
		while(pallenlength--) {
			ans += "a";
		}
		int x = 98;
		for(int i =k ;i < n ; ++i) {
			ans += char(x);
			x++;
			if(x > 99) {
				x = 97;
			}
		}
		cout<<ans<<"\n";
	}
}
 
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}