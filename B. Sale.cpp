#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i =0 ; i<n ; i++) {
	    cin>>a[i];
	}
	sort(a , a+n);
	int cost =0;
	for(int i =0 ; i<m ; i++) {
	    if(a[i]<0) {
	        cost += a[i];
	    }
	    else {
	        break;
	    }
	}
	cout<<-1*cost;
	return 0;
}
