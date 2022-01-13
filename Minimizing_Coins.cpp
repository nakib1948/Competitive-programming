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
        vector<ll>v(m+1,1e9);
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }

        v[0]=0;
        for(ll i=1;i<=m;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(i-a[j] >=0)
                {
                    v[i]=min(v[i],v[i-a[j]]+1);
                }
            }
        }

        if(v[m]==1e9)
        cout<< -1 <<endl;
        else cout<<v[m]<<endl;


    return 0;
}

