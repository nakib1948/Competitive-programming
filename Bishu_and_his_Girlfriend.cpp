#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

vector<ll>v[1001];
ll visit[1001],dist[1001];
void dfs(ll node,ll d)
{
    visit[node]=1;
    dist[node]=d;
    for(auto x:v[node])
    {
        if(visit[x]==0)
        {
            dfs(x,dist[node]+1);
        }
    }
}


int main()
{
   
        ll i,j,x,y,z,count=INT_MAX,sum=-1,n;
        cin>>n;
        
        for(ll i=0;i<n-1;i++)
        {
            ll x,y;
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }

        dfs(1,0);
        ll q;
        cin>>q;
        while(q--)
        {
            ll g;
            cin>>g;
            if(dist[g]<count)
            {
                count=dist[g];
                sum=g;
            }
            else if(dist[g]==count && g<sum)
            sum=g;
        }
            cout<<sum<<endl;

    return 0;
}

