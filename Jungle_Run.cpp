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
ll i,j,x,y,z,count=0,sum=0,n,m,e,e1;
char a[35][35];
ll dis[35][35],visited[35][35];
ll dx[]={-1,0,1,0},dy[]={0,1,0,-1};

bool isvalid(ll x,ll y)
{
    if(x<0 || x>=n || y<0 || y>=n)
    return false;
    if(a[x][y]=='T' || visited[x][y]==1)
    return false;

    return true;
}

void bfs(ll x,ll y)
{
    visited[x][y]=1;
    dis[x][y]=0;
    queue<pair<ll,ll> >q;
    q.push({x,y});

    while(!q.empty())
    {
        ll k=q.front().ff;
        ll k1=q.front().ss;
        q.pop();
        for(ll i=0;i<4;i++)
        {
            if(isvalid(k+dx[i],k1+dy[i]))
            {
                dis[k+dx[i]][k1+dy[i]]=dis[k][k1]+1;
                visited[k+dx[i]][k1+dy[i]]=1;
                q.push({k+dx[i],k1+dy[i]});
            }
        }
    }
}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
  
        cin>>n;
 
        rep(i,n)
        {
            for(ll j=0;j<n;j++){
            cin>>a[i][j];
             if(a[i][j]=='S')
             {
                 x=i,y=j;
             }
             if(a[i][j]=='E')
             {
                 e=i,e1=j;
             }
            }
        }

        bfs(x,y);

        cout<<dis[e][e1]<<endl;


    return 0;
}

