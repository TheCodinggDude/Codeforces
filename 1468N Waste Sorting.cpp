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
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			ll c1,c2,c3,a1,a2,a3,a4,a5;
			cin>>c1>>c2>>c3>>a1>>a2>>a3>>a4>>a5;
			if(a1>c1 || a2>c2 || a3>c3)
				cout<<"NO"<<endl;
			else
			{
				c1-=a1;
				c2-=a2;
				c3-=a3;
				if(c1>=a4)
				{
					c1=c1-a4;
					a4=0;
				}
				else
				{
					a4=a4-c1;
					c1=0;
				}
				if(c2>=a5)
				{
					c2=c2-a5;
					a5=0;
				}
				else
				{
					a5=a5-c2;
					c2=0;
				}
				if(a4==0 && a5==0)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					if(c3>=a4)
					{
						c3=c3-a4;
						a4=0;
					}
					else
					{
						a4=a4-c3;
						c3=0;
					}
					if(c3>=a5)
					{
						c3=c3-a5;
						a5=0;
					}
					else
					{
						a5=a5-c3;
						c3=0;
					}
					if(a4==0 && a5==0)
						cout<<"YES"<<endl;
					else
						cout<<"NO"<<endl;
				}
			}
		}
		return 0;
	}
