#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
        int n, sum=0, odd=0, even=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
            if(arr[j]%2!=0 || arr[j]==1){
                odd++;
            }
            else{
                even++;
           }
           sum+=arr[j];
       }
       if(sum%2!=0 || sum==1){
           cout<<"YES"<<endl;
       }
       else{
           if(odd!=0 && even!=0){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
       }
   }
   return 0;
}
