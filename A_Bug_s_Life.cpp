#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
vector<ll>v[2005];
ll visit[2005],colour[2005];
bool bfs(ll node)
{
    colour[node]=1;
    queue<ll>q;
    q.push(node);
    while(!q.empty())
    {
        ll k=q.front();
        q.pop();
        for(auto it:v[k])
        {
            if(visit[it]==0 && colour[it]==-1)
            {
                colour[it]=1-colour[k];
                visit[it]=1;
                q.push(it);
            }
            else if(colour[it]==colour[k])
            return false;
        }
    }
    return true;
}
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
        ll t,l;
        cin>>t;
        for(l=1;l<=t;l++)
        {

        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        for(ll i=1;i<=n;i++)
        {
            v[i].clear();
            visit[i]=0;
            colour[i]=-1;
        }
       
        for(ll i=1;i<=m;i++)
        {
            ll x,y;
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        bool ok=true;
        for(ll i=1;i<=n;i++)
        {
            if(visit[i]==0)
            {
                if(!bfs(i))
                {
                    ok=false;
                    break;
                }
            }
        }
        if(ok)
         cout<<"Scenario #"<<l<<":"<<endl<<"No suspicious bugs found!"<<endl;
         else 
          cout<<"Scenario #"<<l<<":"<<endl<<"Suspicious bugs found!"<<endl;
   
        }
    return 0;
}

