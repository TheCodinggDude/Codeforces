#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	int meat , cost=INT_MAX , price,money = 0;
	while(t--) {
	    cin>>meat>>price;
	    if(price < cost) {
	        cost = price;
	    }
	    money += meat*cost;
	}
	cout<<money;
	return 0;
}
