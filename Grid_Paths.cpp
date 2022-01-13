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
ll i,j,x,y,z,c=0,sum=0,n,m;
char a[1005][1005];
ll dp[1005][1005];
ll f(ll x,ll y)
{
      if(a[x][y]=='*')
      return 0;
     if(dp[x][y]!=-1)
       return dp[x][y];
      if(x==n-1 && y==n-1)
      return 1;
    
    ll p=0,q=0;
    if(x+1 <n && y<n && a[x+1][y]!='*'){
       p=f(x+1,y)%1000000007;
    }
    if(y+1<n && x<n && a[x][y+1]!='*'){
      q=f(x,y+1)%1000000007;
    }
    return dp[x][y]=(p%1000000007 + q%1000000007)%1000000007;
}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///
 
        heyyoo;    
        cin>>n;
        memset(dp,-1,sizeof(dp));
        rep(i,n)
        {
            for(ll j=0;j<n;j++){
            cin>>a[i][j];
            }
        }
     
        cout<< f(0,0)<<endl;

    return 0;
}

