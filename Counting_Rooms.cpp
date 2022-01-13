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
ll z,c=0,sum=0,n,m;
char a[1005][1005];
ll visited[1005][1005];
ll dx[]={-1,0,1,0};ll dy[]={0,1,0,-1};
bool isvalid(ll x,ll y)
{
    if(x<0 || x>=n || y<0 || y>=m)
    return false;
    if(a[x][y]=='.' && visited[x][y]==0)
    return true;

    return false;
}

void dfs(ll i,ll j)
{
    visited[i][j]=1;
    
    for(ll l=0;l<4;l++)
    {
        if(isvalid(dx[l]+i,dy[l]+j))
        dfs(dx[l]+i,dy[l]+j);
    }

}

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
  
        cin>>n>>m;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            cin>>a[i][j];
        }


        for(ll i=0;i<n;i++)
        {
           for(ll j=0;j<m;j++)
           {
               if(a[i][j]=='.' && visited[i][j]==0)
               {
                   c++;
                   dfs(i,j);
               }
           }
        }
        cout<<c<<endl;

    return 0;
}

