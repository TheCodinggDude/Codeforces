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
#define asc(c) c.begin(),c.end()
#define des(c) c.begin(),c.end(),greater<int>()

#define pb push_back

#define eb emplace_back
#define f first
#define s second
 

void solve() {
	ll n , c =0;
	cin>>n;
	for(int i =1 ; i<=n/2 ; ++i) {
		if(n%i == 0) {
			c++;
		}
	}
	cout<<c;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}