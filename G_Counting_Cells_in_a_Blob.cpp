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
vector<string>v;
ll z,c=0,sum=0,n,m,k;
char a[25][25];
ll visited[25][25];
ll dx[]={-1,0,1,0,1,1,-1,-1};ll dy[]={0,1,0,-1,1,-1,1,-1};
bool isvalid(ll x,ll y)
{
    if(x<0 || x>=n || y<0 || y>=m)
    return false;
    if(a[x][y]=='1' && visited[x][y]==0)
    return true;

    return false;
}

void dfs(ll i,ll j)
{
    visited[i][j]=1;
    c++;
    for(ll l=0;l<8;l++)
    {
        if(isvalid(dx[l]+i,dy[l]+j))
        dfs(dx[l]+i,dy[l]+j);
    }

}

int main()
{

        heyyoo;
        string s;
        ll t,k=0;
        cin>>t;
        cin.ignore();
        cin.ignore();
        while(t--){
        v.clear();
        ll sum=0;
        c=0;
        memset(visited,0,sizeof(visited));
       
        n=0,m=0;
        while(getline(cin,s))
        {
            if(s=="")break;
            else v.pb(s);
        }
        n=v.size();
        for(ll i=0;i<v.size();i++)
        {
          string w=v[i];
          m=w.size();
          for(ll j=0;j<w.size();j++)
          {
              a[i][j]=w[j];
          }
        }
        // for(ll i=0;i<n;i++)
        // {
        //     for(ll j=0;j<m;j++)
        //     {
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        for(ll i=0;i<n;i++)
        {
           for(ll j=0;j<m;j++)
           {
               if(a[i][j]=='1' && visited[i][j]==0)
               {
                   dfs(i,j);
                   sum=max(sum,c);
                   c=0;
               }
           }
        }
        if(k)cout<<endl;
        cout<<sum<<endl;
        k=1;
        }

    return 0;
}

