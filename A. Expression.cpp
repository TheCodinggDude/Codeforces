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
    int a ,b,c;
    cin>>a>>b>>c;
    int val1 = a+b*c;
    int val2 = (a+b)*c;
    int val3 = a*b+c;
    int val4 = a*(b+c);
    int ans = max( val1 , max(val2 , max(val3 , max(val4 , max(a*b*c , a+b+c)))));
    cout<<ans<<"\n";
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}