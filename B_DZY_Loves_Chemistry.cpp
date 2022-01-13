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
ll visited[10005],dis[10005],co=0;
vector<ll>v[55];
vector<ll>v1;
void dfs(ll node)
{
    visited[node]=1;
    co++;
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
 
        ll i,j,x,y,z,sum=1,n,m;
        cin>>n>>m;
        for(ll i=0;i<m;i++)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        for(ll i=1;i<n;i++)
        {
            if(visited[i]==0)
            {
                dfs(i);
                v1.pb(co);
                co=0;
            }
        }
        for(ll i=0;i<v1.size();i++)
        {
            sum*=pow(2,v1[i]-1);
        }
        cout<<sum<<endl;
    return 0;
}

