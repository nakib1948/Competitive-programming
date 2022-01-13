#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
vector<ll>v[100005];
ll visited[100005];
ll total=0;
void dfs(ll k)
{
    visited[k]=1;
    total++;
    for(auto it:v[k])
    {
        if(visited[it]==0)
        {
            dfs(it);
        }
    }
}
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=1,n,m;
        cin>>n>>m;
        for(ll i=1;i<=n;i++)
        {
            visited[i]=0;
            v[i].clear();
        }
       

        for(ll i=0;i<m;i++)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }

        for(ll i=1;i<=n;i++)
        {
            if(visited[i]!=1)
            {
                total=0;
                dfs(i);
                count++;
                sum=(sum*total)%1000000007;
            }
          
        }
        cout<<count<<" "<<sum<<endl;
    }


    return 0;
}

