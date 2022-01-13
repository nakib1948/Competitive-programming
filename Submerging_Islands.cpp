#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
vector<ll>v[100005];
ll visited[100005],in[100005],low[100005],parent[100005],timer=0;
set<ll>s;
void dfs(ll node)
{
    visited[node]=1;
    timer++;
    in[node]=low[node]=timer;
    ll son=0;
    for(auto child:v[node])
    {
        if(visited[child]==0)
        {
            son++;
            parent[child]=node;
            dfs(child); 
            low[node]=min(low[child],low[node]);
              if(parent[node]== -1 && son>1)
                s.insert(node);
            else if(parent[node]!= -1 && in[node]<=low[child])
                s.insert(node);
        }
        else if(child != parent[node])
        {
            low[node]=min(low[node],in[child]);
        }
    }
}

int main()
{
     ///"Bismillahir Rahmanir Raheem"///
        
        while(1){
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        if(n==0 && m==0)
        break;
        for(ll i=0;i<100005;i++)
        {
            v[i].clear();
            visited[i]=0;
            low[i]=0;
            in[i]=0;
            parent[i]= -1;
        }
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
         dfs(1);
         
         cout<<s.size()<<endl;
         s.clear();timer=0;
        }

    return 0;
}

