#include<bits/stdc++.h>
using namespace std; 
 
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll dp[1000005];
int main()
{
     ///"Bismillahir Rahmanir Raheem"///
 
        heyyoo;
  
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        vector<ll>v(m+1,0);
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
 
        v[0]=1;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<=m;j++)
            {
                if(j-a[i] >=0)
                {
                    v[j]+=(v[j-a[i]])%1000000007;
                }
            }
        }
 
       cout<<v[m]%1000000007<<endl;
 
 
    return 0;
}