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
        ll a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        ll area = (a1*b1) + (a2*b2);
        ll side = sqrt(area);
        if(side*side == area) {
            if(a1 > b1) {
                swap(a1 ,b1);
            }
            if(a2 > b2) {
                swap(a2 ,b2);
            }
            if(a1 + a2 == b1 && a1 + a2 == b2) {
                cout<<"Yes\n";
            }
            else {
                cout<<"No\n";
            }
        }
        else {
            cout<<"No\n";
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