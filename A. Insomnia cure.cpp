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
    ll k , l , m , n , d;
    cin>>k>>l>>m>>n>>d;
    if(k == 1 || l == 1 || m == 1 || n ==1) {
        cout<<d;
    }
    else {
        ll c =0;
        for(ll i =1 ; i<=d ; ++i) {
            if(i%k == 0 || i%l == 0 || i%m==0 || i%n == 0) {
                c++;
            }
        }
        cout<<c<<"\n";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    solve();
    return 0;
}
