#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
    sort(s.begin() , s.end());
    int i ;
    for( i =0 ; i<s.length() ; i++) {
        if(s[i]!='+') {
            break;
        }
    }
    string ans= "";
    for(; i<s.length() ; ++i) {
        ans += s[i];
        if(s[i+1]!='\0') {
            ans += '+';
        }
    }
    cout<<ans;
	return 0;
}
