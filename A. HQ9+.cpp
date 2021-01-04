#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	bool flag = false;
	for(int i =0 ; i< s.length() ; i++) {
	    if(s[i] == 'H' || s[i] == 'Q' || s[i] == '+' || s[i] == '9') {
	        flag = true;
	        break;
	    }
	}
	if(flag) {
	    cout<<"Yes";
	}
	else {
	    cout<<"No";
	}

	return 0;
}
