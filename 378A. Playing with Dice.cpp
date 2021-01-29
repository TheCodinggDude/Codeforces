	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define cendl cout<<endl
	#define fo(i,s,n) for(int i=s;i<n;++i)
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define unset(c) unordered_set<c>
	#define unmap(c,d) unordered_map<c,d>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define pb push_back
	#define eb emplace_back
	#define f first
	#define s second
	#define sumOf(c) accumulate(c.begin(),c.end(),0)
	#define maxOf(c) *max_element(c.begin(),c.end())
	#define minOf(c) *min_element(c.begin(),c.end())
	
	using namespace std;
	int main()
	{
		std::ios::sync_with_stdio(false);
		int T=1;
		// cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			int a,b;
			cin>>a>>b;
			int winA=0,winB=0,draw=0,i;
			fo(i,1,7)
			{
				if(abs(i-a)<abs(i-b))
					winA++;
				else if(abs(i-a)>abs(i-b))
					winB++;
				else 
					draw++;
			}
			cout<<winA<<" "<<draw<<" "<<winB;
		}
		return 0;
	}
