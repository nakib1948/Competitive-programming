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
vector<ll>v1,v[100005];
ll visited[100005],parent[100005];
void bfs(ll node,ll n)
{
    visited[node]=1;
    parent[node]=0;
    queue<ll>q;
    q.push(node);

    while(!q.empty())
    {
        ll k=q.front();
        q.pop();
        for(auto it:v[k])
        {
            if(visited[it]==0)
            {
                q.push(it);
                visited[it]=1;
                parent[it]=k;
            }
        }
    }
    ll x=n;
    while(x!=0)
    {
        v1.pb(parent[x]);
        x=parent[x];
    }

}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
  
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        for(ll i=0;i<m;i++)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        bfs(1,n);
        if(parent[n]==0)
        cout<<"IMPOSSIBLE"<<endl;
        else{
        cout<<v1.size()<<endl;
        for(ll i=v1.size()-2;i>=0;i--)
        cout<<v1[i]<<" ";
        cout<<n<<endl;
        }

    return 0;
}

