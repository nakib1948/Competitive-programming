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
vector<ll>ve[500005];
ll visited[500005],gt[500005],mot=0;

void dfs(ll node)
{
    visited[node]=1;
    mot++;
    for(auto it:ve[node])
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
        vector<ll>v;

        while(m--)
        {
            cin>>x;
            //if(x==0)continue;
            ll a[x];
            for(ll i=0;i<x;i++)
            {
                cin>>a[i];
                v.pb(a[i]);
            }
            if(x==1){
                auto it=v.end();it--;
                v.erase(it);
                continue;
            }

            for(ll i=0;i<x;i++)
            {
                ve[a[i]].pb(a[i]);
                for(ll j=i+1;j<x;j++)
                {
                    ve[a[i]].pb(a[j]);
                    ve[a[j]].pb(a[i]);
                }
            }
        }
        for(ll i=0;i<v.size();i++)
        {
            if(gt[v[i]]!=0)
            cout<<gt[v[i]]<<" ";
            else
            {
                mot=0;
                dfs(v[i]);
                gt[v[i]]=mot;
                cout<<mot<<" ";
                for(ll i=1;i<=n;i++)
                visited[i]=0;
           }
            
        }
        cout<<endl;

    return 0;
}

