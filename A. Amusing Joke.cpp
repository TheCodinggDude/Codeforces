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
    string s1 ,s2;
    cin>>s1>>s2;
    string s3 = s1 + s2;
    sort(s3.begin() , s3.end());
    string s4;
    cin>>s4;
    sort(s4.begin() , s4.end());
    if(s3.length() != s4.length()) {
        cout<<"NO\n";
    }
    else {
        bool flag = true;
        for(int i =0 ; i< s3.length() ; ++i) {
            if(s3[i] != s4[i]) {
                cout<<"NO\n";
                flag = false;
                return;
            }
        }
        if(flag) {
            cout<<"YES\n";
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