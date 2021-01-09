#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int a[n] , b[n];
	for(int i =0 ; i<n ; ++i) {
	    cin>>a[i];
	}
	int x =0;
	b[0] = a[0];
	for(int i = 1 ;i<n ; ++i) {
        x= max(b[i-1] , x);
        b[i] = a[i] + x;
	}
	for(int i =0 ; i<n ; i++) {
	    cout<<b[i]<<" ";
	}
	return 0;
}
