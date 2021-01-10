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
        int a , b;
        cin>>a>>b;
        int diff = abs(b - a);
        if(diff == 0) {
            cout<<"0\n";
        }
        else if(diff <= 10) {
            cout<<"1\n";
        }
        else {
            int c = diff/10;
            if(diff%10 != 0) {
                c++;
            }
            cout<<c<<"\n";
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