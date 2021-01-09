#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	string s;
	cin>>s;
	unordered_map<string , int> unmp;
	string two_gram = "";
	for(int i =0 ; i< n- 1 ; i++) {
	    two_gram += s[i];
	    two_gram += s[i + 1];
	    unmp[two_gram]++;
	    two_gram.clear();
	}
	int max = 0;
	string ans;
	for(auto it : unmp) {
	    if((it.second) > max) {
	        max = it.second;
	        ans = it.first;
	    }
	}
	cout<<ans;
	return 0;
}
