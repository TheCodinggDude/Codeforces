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
    ll t;
    cin>>t;
    while(t--) {
        ll n ,odd = 0;
        cin>>n;
        string s;
        cin>>s;
        for(char ch : s) {
            if((ch - '0') & 1 == 1) {
                odd++;
            }
        }
        if(odd <= 1) {
            cout<<"-1\n";
        }
        else {
            ll cnt =0;
            for(char ch : s) {
                if((ch - '0') & 1 == 1) {
                    cout<<ch;
                    cnt++;
                }
                if(cnt == 2) {
                    break;
                }
            }
            cout<<"\n";
        }
    }
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}