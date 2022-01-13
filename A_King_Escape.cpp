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
ll t,i,j,k,x,y,z,c=0,sum=0,n,m,d1,d2;
ll alice[1005][1005],visited[1005][1005];
ll dx[]={1,1,1,0,0,-1,-1,-1};
ll dy[]={1,0,-1,1,-1,1,0,-1};
bool dfs(ll x,ll y)
{
    if(x==d1 && y==d2) 
    return true;
    
    for(ll i=0;i<8;i++)
    {
        if(x+dx[i]>=1 && x+dx[i]<=t && y+dy[i]>=1 && y+dy[i]<=t)
        {
            
            if(alice[x+dx[i]][y+dy[i]]==0 && visited[x+dx[i]][y+dy[i]]==0)
            {
                visited[x+dx[i]][y+dy[i]]=1;
                dfs(x+dx[i],y+dy[i]);    
                visited[x+dx[i]][y+dy[i]]=0;
            }

        }

    }
    return false;
}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        Quicksilver;
   
        cin>>t>>n>>m>>x>>y>>d1>>d2;
        i=n,j=m;
        while(i>=1 && j>=1)
        {
            alice[i][j]=1;
            i--;j--;
        }
        i=n,j=m;
        while(i>=1 && j<=t)
        {
            alice[i][j]=1;
            i--;j++;
        }
        i=n,j=m;
        while(i<=t && j<=t)
        {
            alice[i][j]=1;
            i++;j++;
           
        }
        i=n,j=m;
        while(i<=t && j>=1)
        {
            alice[i][j]=1;
            i++;j--;
        }
        for(ll j=1;j<=t;j++)
        {
            alice[n][j]=1;
            alice[j][m]=1;
        }
        // for(ll i=1;i<=8;i++)
        // {
        //     for(ll j=1;j<=8;j++)
        //     cout<<alice[i][j]<<" ";
        //     cout<<endl;
        // }
        
        if(alice[x][y]==0)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    return 0;
}

