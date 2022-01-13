#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
vector<ll>v[10005];
ll visited[10005];
ll maxvalue,currnode;

void dfs(ll edges,ll distance)
{
    visited[edges]=1;
    
    if(distance>maxvalue)
    {
        maxvalue=distance;
        currnode=edges;
    }
    for(auto it:v[edges])
    {
        if(visited[it]==0)
        {
            dfs(it,distance+1);
        }
    }

}

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     

        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        for(ll i=0;i<n-1;i++)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        
        maxvalue=-1;
        dfs(1,0);
    
        for(ll i=0;i<10005;i++)
        {
            visited[i]=0;
        }
        maxvalue=-1;
        dfs(currnode,0);

        cout<<maxvalue<<endl;


    return 0;
}

