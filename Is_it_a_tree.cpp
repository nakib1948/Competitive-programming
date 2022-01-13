#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
vector<ll>v[10001];
ll visited[10001];

void dfs(ll dhor)
{
    visited[dhor]=1;
    for(auto it:v[dhor])
    {
        if(visited[it]==0)
        {
            dfs(it);
        }
    }
}

int main()
{

        ll i,m,j,x,y,z,count=0,sum=0,n;
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            ll a,b;
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }

        for(ll i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                dfs(i);
                count++;
            }
        }

        if(count==1 && m==(n-1))
          cout<<"YES"<<endl;
        else 
          cout<<"NO"<<endl;
    


    return 0;
}

