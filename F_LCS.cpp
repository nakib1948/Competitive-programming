#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
ll dp[3002][3002];
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

        ll i,j,x,y,z,count=0,sum=0,n,m;
        string s,s1;
        cin>>s>>s1;
        
        
        vector<char>v;
        x=s.size(),y=s1.size();
      
        
        for(ll i=0;i<=x;i++)
        {
            for(ll j=0;j<=y;j++)
            {
                //debug;
                if(i==0 || j==0)
                dp[i][j]=0;
                else if(s[i-1]==s1[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    count=max(count,dp[i][j]);
                }
                else if(s[i-1]!=s1[j-1])
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
       // cout<<count<<endl;
        i=x,j=y;
        while(i>0 && j>0)
        {
            if((dp[i][j-1]>dp[i-1][j])&&(dp[i][j-1]==dp[i][j]))
            {
                j--;
            }
            else if((dp[i][j-1]<dp[i-1][j])&&(dp[i-1][j]==dp[i][j]))
            {
                i--;
            }
            else if((dp[i][j-1]==dp[i-1][j])&&(dp[i][j-1]==dp[i][j]))
            {
                j--;
            }
            else if(max(dp[i][j-1],dp[i-1][j])<dp[i][j])
            {
                v.pb(s[i-1]);
                i--;
                j--;
            }
        }
        for(ll i=v.size()-1;i>=0;i--)
        {
            cout<<v[i];
        }
        cout<<endl;
    return 0;
}

