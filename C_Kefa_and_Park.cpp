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
ll i,j,x,y,z,cnt=0,sum=0,n,m;
vector<ll>v[100005];
ll cat[100005],visited[100005],parent[100005];

void bfs(ll node)
{
   visited[node]=1;
   if(cat[node])
   parent[node]=1;
   queue<ll>q;
   q.push(node);
   while(!q.empty())
   {
       ll k=q.front();
       for(auto it:v[k])
       {
           if(cat[it])
           parent[it]+=parent[k];
           q.push(it);
       }
   }

}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

            Quicksilver;
  
            cin>>n>>m;
            for(ll i=1;i<=n;i++)
            {
                cin>>cat[i];
            }
            vector<ll>v1;
            for(ll i=0;i<n-1;i++)
            {
                cin>>x>>y;
            
                v[x].pb(y);
                v[y].pb(x);
            }
            for(ll i=1;i<=n;i++)
            {
                if(v[i].size()==1)
                v1.pb(i);
            }
            for(ll i=0;i<v1.size();i++)
            {
                if(parent[v1[i]])
            }
        cout<<cnt<<endl;
        


    return 0;
}

