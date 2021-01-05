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
		double a, b ,c ,d;
		cin>>a>>b>>c>>d;
		double timehesleep = c-d ;
		ll ans =0;
		if(b >= a) {
			cout<<(ll)b<<"\n";
			continue;
		}
		if(timehesleep <= 0) {
			cout<<"-1\n";
			continue;
		}
		else {
        	a -= b;
        	double tmp = int(ceil(a/timehesleep));
        	ans = b + c*tmp;
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