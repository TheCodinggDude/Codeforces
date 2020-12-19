#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    unordered_set<int> uset;
    for(int i =0 ; i< s.length() ;i++) {
        uset.insert(s[i]);
    }
    int c = uset.size();
    if(c%2 != 0) {
        cout<<"IGNORE HIM!";
    }
    else {
        cout<<"CHAT WITH HER!";
    }
    return 0;
}
