#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
vector<ll>v[100001],v1;
ll visited[100001],parent[100001],x,y,z;

void dfs(ll node,ll pa)
{
    visited[node]=1;

    for(auto it:v[node])
    {
        if(it==pa)continue;
        if(visited[it]==0)
        {
            parent[it]=node;
            dfs(it,node);
        }
        else
        {
            if(parent[it]!=node)
            {
                x=it;
                y=node;
            }
        }
        
    }
}

int main()
{

        ll i,m,j,count=0,sum=0,n;
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
                    dfs(i,i);
                }
            }
            
            if(x==0 && y==0)
            cout<<"IMPOSSIBLE"<<endl;
            else{
            v1.pb(y);
            v1.pb(x);
            while(x!=y)
            {
                x=parent[x];
                v1.pb(x);
            }
            cout<<v1.size()<<endl;
            for(auto it:v1)
            cout<<it<<" ";
            }
    return 0;
}

