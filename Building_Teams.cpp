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
vector<ll>v,v1[100005];
ll visited[100005],dis[100005],mx=0;
bool ok=true;
void bfs(ll node)
{
    visited[node]=1;
    dis[node]=1;
    queue<ll>q;
    q.push(node);
    while(!q.empty())
    {
        ll k=q.front();
        q.pop();
        if(dis[k]==0)
        dis[k]=1;
        for(auto it:v1[k])
        {
            if(visited[it]==0)
            {
                visited[it]=1;
                if(dis[k]==1)
                dis[it]=2;
                else if(dis[k]==2)
                dis[it]=1;
                q.push(it);
            }
        }

    }

}
void bfs1(ll node)
{
    visited[node]=1;
    queue<ll>q;
    q.push(node);
    while(!q.empty())
    {
        ll k=q.front();
        q.pop();
        for(auto it:v1[k])
        {
            if(visited[it]==0){
            q.push(it);
            visited[it]=1;
            }

            if(dis[it]==dis[k])
            {
                ok=false;
                break;
            }
        }
        if(!ok)
        break;
    }
}

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        while(m--)
        {
            cin>>x>>y;
            v1[x].pb(y);
            v1[y].pb(x);
        }
    
        for(ll i=1;i<=n;i++)
        {
            if(visited[i]==0)
            bfs(i);
        }
        for(ll i=1;i<=n;i++)
        {
            visited[i]=0;
        }
        for(ll i=1;i<=n;i++)
        {
            if(visited[i]==0)
            bfs1(i);
        }
        if(ok){        
        for(ll i=1;i<=n;i++)
        cout<<dis[i]<< " ";
        cout<<endl;
        }
        else cout<<"IMPOSSIBLE"<<endl;

    return 0;
}

