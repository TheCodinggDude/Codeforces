#include <iostream>
using namespace std;

int main()
{
    int n , m , a, b ;
    cin>>n>>m>>a>>b;
    if(n < m) {
        cout<<min(b , a*n);
    }
    else if(n%m == 0) {
            int tickets = n/m;
            cout<<min(b*tickets , a*n);
    }
    else {
        int ticket_b = n/m;
        int left = n%m;
        if(left*a < b) {
            cout<<ticket_b*b + left*a;
        }
        else {
            cout<<ticket_b*b + b;
        }
    }
    return 0;
}
