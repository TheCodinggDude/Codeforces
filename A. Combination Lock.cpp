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
    int n;
    cin>>n;
    string s1 , s2;
    cin>>s1>>s2;
    int c = 0;
    for(int i =0 ; i< n ;++i) {
        int x = s1[i] - '0';
        int y = s2[i] - '0';
        c += min(abs(x  - y) , (10 - abs(x - y)));
    }
    cout<<c<<"\n";
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}