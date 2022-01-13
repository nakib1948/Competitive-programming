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
ll z,c=0,sum=0,n,m,x,y,p,q;
char a[1005][1005],parent[1005][1005],ch[4]={'U','R','D','L'};
ll visited[1005][1005];
ll dx[]={-1,0,1,0};ll dy[]={0,1,0,-1};
vector<char>v;
bool isvalid(ll x,ll y)
{
    if(x<0 || x>=n || y<0 || y>=m)
    return false;
    if((a[x][y]=='.'|| a[x][y]=='B') && visited[x][y]==0)
    return true;
 
    return false;
}
 
void bfs(ll x,ll y)
{
    visited[x][y]=1;
    queue<pair<ll,ll> >q1;
    q1.push({x,y});

    while(!q1.empty())
    {
        ll j=q1.front().ff,k=q1.front().ss;
        q1.pop();
        for(ll i=0;i<4;i++)
        {
            if(isvalid(j+dx[i],k+dy[i]))
            {
                q1.push({j+dx[i],k+dy[i]});
                visited[j+dx[i]][k+dy[i]]=1;
                v.pb(ch[i]);
                if(a[j+dx[i]][k+dy[i]]=='B')
                {
                    sum=1;
                    break;
                }
              
            }
        }
        if(sum)
        break;
    }

}
 
int main()
{
     ///"Bismillahir Rahmanir Raheem"///
 
        heyyoo;
  
        cin>>n>>m;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='A')
            {
                x=i,y=j;
            }
            if(a[i][j]=='B')
            {
                p=i,q=j;
            }
            parent[i][j]='.';
            }
        }
 
        bfs(x,y);
        if(visited[p][q]==0)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<v.size()<<endl;
            for(auto it:v)
            cout<<it;
       }

        // for(ll i=0;i<n;i++)
        // {
        //     for(ll j=0;j<m;j++)
        //     cout<<parent[i][j] <<" ";
        //     cout<<endl;
        // }
         
    return 0;
}
 