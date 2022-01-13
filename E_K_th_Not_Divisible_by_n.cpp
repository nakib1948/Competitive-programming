#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mkp make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug cout<<"OK"<<endl;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  ll n,m,x,y,z,k,s1=0,s2=0,sum=0,c1=0,c2=0,ans=0;
	  cin>>n>>k;
	  ll x1=(10e18-(10e18/n));
	  ll x2=(10e14-(10e14/n));
	  ll x3=(10e9-(10e9/n));
	  ll x4=(10e5-((10e5)/n));	
	 if(k<=x4)
	 {
	 	ll i=1,Count=0;
      while(1)
      {
         if(i%n!=0)
         {
         	Count++;
         	if(Count==k)
         	{
         		cout<<i<<endl;break;
         	}
         }
         i++;
      }
	 }
	 else if(k<=x3)
	 {
	 	ll i=(10e5)+1,Count=(10e5-(10e5/n));
	 	if(Count==k)
	 	{
	 		cout<<i<<endl;continue;
	 	}	 	
      while(1)
      {
         if(i%n!=0)
         {
         	Count++;
         	if(Count==k)
         	{
         		cout<<i<<endl;break;
         	}
         }
         i++;
      }
	 }
	 else if(k<=x2)
	 {
	 	ll i=(10e9)+1,Count=(10e5-(10e5/n));
	 	if(Count==k)
	 	{
	 		cout<<i<<endl;continue;
	 	}	 	
      while(1)
      {
         if(i%n!=0)
         {
         	Count++;
         	if(Count==k)
         	{
         		cout<<i<<endl;break;
         	}
         }
         i++;
      }
	 }
	 else if(k<=x1)
	 {
	 	ll i=(10e14)+1,Count=(10e14-(10e14/n));
	 	if(Count==k)
	 	{
	 		cout<<i<<endl;continue;
	 	}
      while(1)
      {
         if(i%n!=0)
         {
         	Count++;
         	if(Count==k)
         	{
         		cout<<i<<endl;break;
         	}
         }
         i++;
      }
	 }
      

	}
}