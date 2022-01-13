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

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
  
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll dp[n+1];
        memset(dp,0,sizeof(dp));
        
        dp[0]=1;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=6;j++)
            {
                if(i-j >=0)
                dp[i]=(dp[i]+dp[i-j])%1000000007;
                else break;
            }
        }
        cout<< dp[n] <<endl;

    return 0;
}

