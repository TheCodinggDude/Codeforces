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
 
int arr[10][10];

void solve() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0) {
                arr[i][j] = 1;
            } 
            else if (j == 0) {
                arr[i][j] = 1;
            }
             else {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }
    }
    cout<<arr[a-1][a-1];
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}