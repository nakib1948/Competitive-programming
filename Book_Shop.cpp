#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        int n,m;
        cin>>n>>m;
        vector<vector<int> >dp(n+1,vector<int>(m+1,0));
        vector<int>a(n),b(n);
        for(int &x:a)
        cin>>x;
        for(int &x:b)
        cin>>x;
        
        for(int i=1;i<=n;i++)
        {
           for(int j=0;j<=m;j++)
           {
               dp[i][j] = dp[i-1][j];
               if((j-a[i-1]) >=0)
               {
                   dp[i][j] = max(dp[i][j],dp[i-1][j-a[i-1]]+b[i-1]);
               }
           }
        }
         for(int i=1;i<=n;i++)
        {
           for(int j=0;j<=m;j++)
           {
               cout<<dp[i][j]<<" ";
           }
           cout<<endl;
        }
        //cout<< dp[n][m]<<endl;


    return 0;
}

