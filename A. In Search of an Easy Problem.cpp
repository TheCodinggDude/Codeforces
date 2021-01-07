#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	bool flag = true;
	while(t--) {
	    int x;
	    cin>>x;
	    if(x == 1) {
	        flag = false;
	    }
	}
	flag == true ? cout<<"EASY" : cout<<"HARD";
	return 0;
}
