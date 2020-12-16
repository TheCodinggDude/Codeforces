#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
    getline(cin, s);
    unordered_set<int> us;
    for(int i =0 ; i<s.length() ; ++i) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            us.insert(s[i]);
        }
    }
    cout<<us.size();
	return 0;
}

