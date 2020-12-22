#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int steps;
    cin>>steps;
    if(steps < 6) {
        cout<<1;
    }
    else if(steps%5 == 0) {
        cout<<steps/5;
    }
    else {
        cout<<(steps/5 + 1);
    }
    return 0;
}
