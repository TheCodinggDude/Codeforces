#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n],win=INT_MAX,index=-1;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(mp.find(arr[i])==mp.end())
                mp[arr[i]]=i+1;
            else
                mp[arr[i]]+=n;
        }
        for(auto it:mp) {
            if(ceil((float)it.second/n)<=1) {
                if(win>it.first)  {
                    win=it.first;
                    index=it.second;
                }
            }
        }
        cout<<index<<"\n";
    }
}
