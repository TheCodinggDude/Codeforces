#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t , c =0;
	cin>>t;
	while(t--) {
	    int p , q;
	    cin>>p>>q;
	    if(q-p>1) {
	        c++;
	    }
	}
	cout<<c;
	return 0;
}
