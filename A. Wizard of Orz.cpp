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
        ll n;
        cin>>n;
        if(n == 1) {
            cout<<"9\n";
        }
        else if(n == 2) {
            cout<<"98\n";
        }
        else {
            cout<<"98";
            int val = 9;
            for(int i = 2 ; i<n ; ++i) {
                cout<<val;
                val++;
                if(val > 9) {
                    val =0;
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