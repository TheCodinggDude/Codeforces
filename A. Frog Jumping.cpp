#include <bits/stdc++.h>
using namespace std;

int T;

int main() {
    scanf("%d", &T);
    while(T --) {
       long long a, b, k;
       cin >>a >> b >> k;
       long long ans = 0;
       if(a == b) {
            if(k % 2 == 0) ans = 0;
            else ans = a;
       } else {
            if(k % 2 == 0)
                ans = (k / 2) * (a - b);
            else
                ans = (k / 2) * (a - b) + a;
       }
       cout << ans << endl;
    }
    return 0;
}
