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
ll z,c=0;
char a[25][25];
ll visited[25][25];
ll dx[]={-1,0,1,0};ll dy[]={0,1,0,-1};
bool isvalid(ll x,ll y,ll m,ll n)
{
    if(x<0 || x>=m || y<0 || y>=n)
    return false;
    if(a[x][y]=='.' && visited[x][y]==0)
    return true;

    return false;
}

void dfs(ll i,ll j,ll m,ll n)
{
    visited[i][j]=1;
    c++;
    for(ll l=0;l<4;l++)
    {
        if(isvalid(dx[l]+i,dy[l]+j,m,n))
        dfs(dx[l]+i,dy[l]+j,m,n);
    }

}

int main()
{

        heyyoo;
        ll t,count=1;
        cin>>t;
        while(t--)
        {
            ll n,m,x,y;
            memset(visited,0,sizeof(visited));
            c=0;
            cin>>n>>m;
            for(ll i=0;i<m;i++)
            {
                for(ll j=0;j<n;j++){
                cin>>a[i][j];
                if(a[i][j]=='@')
                {
                    x=i,y=j;
                }

                }
            }
            dfs(x,y,m,n);
            cout<<"Case "<<count<<": "<<c<<endl;
            count++;
            
        }
    return 0;
}

