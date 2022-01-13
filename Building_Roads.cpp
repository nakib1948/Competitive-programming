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
vector<ll>v[100005];
ll visited[100005];
void dfs(ll node)
{
    visited[node]=1;
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
  
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        while(m--)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        vector<ll>v1;
        for(ll i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                dfs(i);
                v1.pb(i);
            }
        }
        if(v1.size()==1)
        cout<<0<<endl;
        else
        {
            cout<<v1.size()-1<<endl;
            for(ll i=0;i<v1.size()-1;i++)
            {
                cout<<v1[i]<<" "<<v1[i+1]<<endl;
            }
        }
        


    return 0;
}

