#include<bits/stdc++.h>
using namespace std; 
 
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
vector<pair<ll,ll> >v[100005];
ll visited[100005],dis[100005];
int main()
{
     ///"Bismillahir Rahmanir Raheem"///
 
        Quicksilver;
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        while(m--)
        {
            cin>>x>>y>>z;
            v[x].pb({y,z});
        }
        for(ll i=2;i<=n;i++)
        {
            dis[i]=-1;
        }
       
        priority_queue<pair<ll,ll> ,vector<pair<ll,ll> > , greater<pair<ll,ll> > >q;
        q.push({0,1});
        while(!q.empty())
        {
            ll c=q.top().ff;
            ll d=q.top().ss;
            q.pop();
            if(visited[d])continue;
            visited[d]=1;
            for(auto i:v[d])
            {
                if(visited[i.ff]!=0)continue;
                if(dis[i.ff]==-1 || dis[d]+i.ss < dis[i.ff])
                {
                    dis[i.ff]=dis[d]+i.ss;
                    q.push({dis[i.ff],i.ff});
                }
            }
        }
        for(ll i=1;i<=n;i++)
        {
            cout<<dis[i]<< " ";
        }
 
 
    return 0;
}