#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i =0 ; i<n ;i++) {
            cin>>a[i];
        }
        unordered_map<int , int> unmp;
        unmp[a[0]]++;
        for(int i =1 ; i<n ; i++) {
            if(a[i] == a[i-1]) {
                continue;
            }
            unmp[a[i]]++;
        }
        int mx = INT_MAX;
        unmp[a[0]]--;
        unmp[a[n - 1]]--;
        for(auto x : unmp) {
            mx = min(x.second , mx);
        }
        cout<<mx + 1<<"\n";
    }
    return 0;
}
