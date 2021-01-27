#include <bits/stdc++.h>
 
using namespace std;
 
#define endl "\n"
#define cendl cout<<endl
#define for(i , s , n) for(int i=s;i<n;++i)
 
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
	int n , i , c =0 , one =0 , two =0 , three =0 , four =0;
	cin>>n;
	for(i , 0 , n) {
		int x;
		cin>>x;
		if(x == 1) {
			one++;
		}
		else if(x == 2) {
			two++;
		}
		else if(x == 3) {
			three++;
		}
		else {
			four++;
		}
	}
	c += four + three + two/2;
	one -= three;
	if(two % 2 ==1) {
		c++;
		one -=2;
	}
	if(one > 0) {
		c += (one+3)/4 ;
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