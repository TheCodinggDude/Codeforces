#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     double n,k,sum=0.0;

    cin >> n;

    for (int i=1; i<=n; i++) {
        cin >> k;
        sum += k;
    }

    cout << fixed << setprecision(12) << sum/n << endl;

    return 0;
}
