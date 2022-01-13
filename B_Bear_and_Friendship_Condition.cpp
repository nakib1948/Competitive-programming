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
ll visited[200000],parent[200000],edges=0,totnode=0;
vector<ll>v[200000];

void bfs(ll node)
{
    visited[node]=1;
    queue<ll>q;
    q.push(node);
    totnode++;
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(auto it:v[u])
        {
            if(visited[it]==0)
            {
                q.push(it);
                edges++;
                totnode++;
                visited[it]=1;
                parent[it]=u;
            }
            else if(visited[it]==1 && parent[it]!=u)
                edges++;
        }
    }
  
}

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        for(ll i=1;i<=m;i++)
        {
            cin>>x>>y;
            
            v[x].pb(y);
            v[y].pb(x);
        }
        vector<pair<ll,ll> >pa;
        for(ll i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                bfs(i);
                //cout<<totnode<<" "<<edges/2<<endl;
                pa.pb(mp(totnode,edges/2));
                totnode=0,edges=0;
            }
        }

        bool ok=true;
        for(ll i=0;i<pa.size();i++)
        {
            if(pa[i].ff==1)
                continue;
            else if(pa[i].ff==2)
            {
                if(pa[i].ss==1)
                continue;
                else 
                {
                    ok=false;
                    break;
                }
            }
            else 
            {
                ll k1=(pa[i].ff * (pa[i].ff - 1)) / 2 ;
                if(k1==pa[i].ss)
                continue;
                else
                {
                    ok=false;
                    break;
                }
                
            }
            
        }

        cout<<(ok? "YES":"NO")<<endl;

    return 0;
}

