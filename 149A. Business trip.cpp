#include <bits/stdc++.h>
 
using namespace std;
 
#define endl "\n"
#define cendl cout<<endl
 
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

#define sumOf(c) accumulate(c.begin(),c.end(),0)
#define maxOf(c) *max_element(c.begin(),c.end())
#define minOf(c) *min_element(c.begin(),c.end())

#define pb push_back
 
#define eb emplace_back
#define f first
#define s second 

 
void solve() {
	ll k ;
	cin>>k;	
	vll a(12);
	for(ll i =0 ; i< 12 ; ++i) {
		cin>>a[i];
	} 
	sort(des(a));
	ll height = 0 , c =0;
	for(ll i =0 ; i < 12 ; ++i) {
		if(height >= k) {
			break;
		}
		c++;
		height += a[i];
	}
	if(height >= k) {
		cout<<c<<"\n";
	}
	else {
		cout<<"-1\n";
	}
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
