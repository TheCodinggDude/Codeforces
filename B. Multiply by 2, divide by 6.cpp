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
        int count = 0;
		while (n % 3 == 0) {
			if (n % 6 != 0) {
				n *= 2;
			}
			else {
				n /= 6;
			}
			count++;
		}
		if (n != 1) {
			printf("-1\n");
		}
		else {
			printf("%d\n", count);
		}
    }

	return 0;
}
