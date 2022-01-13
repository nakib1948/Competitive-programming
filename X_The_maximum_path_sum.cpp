
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=1;i<=n;i++)
#define debug cout<<"debug"<<endl;
ll a[200][100],dp[200][100];
ll i,j,x,y,z,c=0,sum=0,n,m;
ll f(ll x,ll y,ll curr_sum)
{
    if(x==n && y==m)
    return a[x][y]+curr_sum;

    if(dp[x][y]!=-1) return dp[x][y];
    ll p=INT_MIN,q=INT_MIN;
    if(x+1<=n)
    p=f(x+1,y,curr_sum+a[x][y]);

    if(y+1<=m)
    q=f(x,y+1,curr_sum+a[x][y]);
    
    return dp[x][y]=max(p,q);
}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///
      
        cin>>n>>m;
        x=m;
        memset(dp,-1,sizeof(dp));
        rep(i,n)
        {
            for(ll j=1;j<=m;j++)
            cin>>a[i][j];
        }

        cout<<f(1,1,0)<<endl;

    return 0;
}

