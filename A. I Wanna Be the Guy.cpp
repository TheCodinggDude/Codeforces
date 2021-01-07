#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int p ,q;
    cin>>p;
    int a[n] = {0} ;
    for(int i =0 ;i<p ;i++) {
        int x;
        cin>>x;
        a[x-1]++;
    }
    cin>>q;
    for(int i =0 ; i<q ; i++) {
        int x;
        cin>>x;
        a[x-1]++;
    }
    bool flag = true;
    for(int i =0; i<n ; i++ ) {
        if(a[i] == 0) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout<< "I become the guy.";
    }
    else {
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
