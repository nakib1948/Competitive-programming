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
vector<ll>v[105],v1;
ll visited[105],a[105],dis[105],s=0,final;
void dfs(ll node)
{
        visited[node]=1;
        ll paisi= -1,mx=0;
        for(auto it:v[node])
        {
            if(visited[it]==0)
            {
                if(a[it]>mx)
                {
                    mx=a[it];
                    paisi=it;
                }
            }
        }
        if(paisi!= -1)
        {
            s+=mx;
            final=paisi;
            dfs(paisi);
        }
}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t,c=1;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        for(ll i=0;i<105;i++)
        {
            v[i].clear();
            visited[i]=0;
            a[i]=0;
        }
        final=0,s=0;
        cin>>n>>m;
        rep(i,n)
        {
            cin>>a[i];
        }
        for(ll i=1;i<=m;i++)
        {
            cin>>x>>y;
            v[x].pb(y);
        }
        dfs(0);

        cout<<"Case "<<c<<": "<<s<<" "<<final <<endl;
        c++;
    }


    return 0;
}

