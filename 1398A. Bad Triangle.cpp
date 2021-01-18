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
	ll t,n,a[50001];
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=1; i<=n; i++){
            cin>>a[i];
        }
        ll idx1 = 0,idx2 = 0,idx3 = 0,sum = 0,flag = 0;
        sum = a[1]+a[2];
        idx1 = 1,idx2 = 2;
        for(ll i=3; i<=n; i++){
            if(a[i] >= sum){
                idx3 = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout<<idx1<<" "<<idx2<<" "<<idx3<<endl;
        }
        else{
            cout<<-1<<endl;
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