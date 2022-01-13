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
vector<ll>v[10005];
ll a[10005],visited[10005],c=0;

void dfs(ll node)
{
    visited[node]=1;
    c++;
    for(auto it:v[node])
    {
        if(visited[it]==0)
        dfs(it);
    }

}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m>>z;
        for(ll i=0;i<m;i++)
        {
            cin>>x>>y;
            v[x].pb(y);
          
        }
        for(ll i=0;i<z;i++)
        {
            cin>>x;
            if(visited[x]==0)
           {
                dfs(x);
              
           }
        }

        for(ll i=1;i<=n;i++)
        {
            if(visited[i]==1)count++;
            visited[i]=0;
            v[i].clear();
        }
        cout<<count<<endl;
       
    }


    return 0;
}

