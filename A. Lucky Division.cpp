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
    int a;
    cin >> a;
    if (a % 4 == 0 || a % 7 == 0 || a % 44 == 0 || a % 47 == 0 || a % 74 == 0 || a % 77 == 0 || a % 444 == 0 || a % 447 == 0 || a % 474 == 0 || a % 477 == 0 || a % 744 == 0 || a % 747 == 0 || a % 774 == 0 || a % 777 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}