#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n] , sum =0;
    for(int i =0 ; i<n ; i++) {
        cin>>a[i];
        sum += a[i];
    }
    sort(a , a+n);
    int c = 0 , ans =0;
    for(int i =n-1 ; i>=0 ; i--) {
        ans += a[i];
        sum-=a[i];
        c++;
        if(ans > sum) {
            break;
        }
    }
    cout<<c;
    return 0;
}
