#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i =0 ; i<n ; i+=2) {
	        cin>>a[i];
	    }
	    if(n%2 == 0) {
            for(int i = n-1 ; i>=1 ; i-=2) {
                cin>>a[i];
            }
	    }
	    else {
	        for(int i = n-2 ; i>=1 ; i-=2) {
                cin>>a[i];
            }
	    }
        for(int i = 0 ; i<n ; i++) {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
	}
	return 0;
}
