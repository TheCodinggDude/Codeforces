#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    int a[3] = {0,0,0};
    while(t--) {
        int x, y, z;
        cin>>x>>y>>z;
        a[0] += x;
        a[1] += y;
        a[2] += z;
    }
    if(a[0] == 0 && a[1] == 0 && a[2] == 0) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}
