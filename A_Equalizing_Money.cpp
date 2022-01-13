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
vector<ll>v[1005];
ll visited[1005],a[1005],c=0,s=0;

void dfs(ll node)
{
    visited[node]=1;
    c++;
    s+=a[node];
    for(auto it:v[node])
    {
        if(visited[it]==0)
        {
            dfs(it);
        }
    }
}

int main()
{

    heyyoo;
    ll t,c1=1;
    cin>>t;
    while(t--)
    {
        for(ll i=0;i<1005;i++)
        {
            visited[i]=0;
            a[i]=0;
            v[i].clear();
        }
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(ll i=1;i<=m;i++)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        bool ok=true;
        for(ll i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                s=0,c=0;
                dfs(i);
                if((s%c) !=0)
                {
                    ok=false;
                    break;
                }

                if(count==0)
                {
                    count=s/c;
                }
                else if(count!=(s/c))
                {
                    ok=false;
                    break;
                }
                

            }
        }
        if(ok)
        cout<<"Case "<<c1<<": "<<"Yes"<<endl;
        else cout<<"Case "<<c1<<": "<<"No"<<endl;

        c1++;
    }


    return 0;
}

