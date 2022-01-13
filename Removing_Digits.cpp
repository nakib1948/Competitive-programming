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
        vector<ll>dp(n+1,1e9);
        dp[0]=0;
        for(ll i=1;i<=n;i++)
        {
            x=i;
            while(x!=0)
            {
                y=x%10;
                if(i-y>=0)
                dp[i]=min(dp[i],dp[i-y]+1);

                x/=10;
            }
        }
        cout<< dp[n] <<endl;

    return 0;
}

