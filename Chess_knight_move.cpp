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
ll i,j,x,y,z,c=0,sum=0,n,m,e,e1;
ll dis[9][9],visited[9][9];
ll dx[]={-2,-1,1,2,2,1,-1,-2},dy[]={1,2,2,1,-1,-2,-2,-1};

bool isvalid(ll x,ll y)
{
    if(x<0 || x>=8 || y<0 || y>=8)
    return false;
     if(visited[x][y]==1)
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
        for(ll i=0;i<8;i++)
        {
            if(isvalid(k+dx[i],k1+dy[i]))
            {
               
                dis[k+dx[i]][k1+dy[i]]=dis[k][k1]+1;
                visited[k+dx[i]][k1+dy[i]]=1;
             
                q.push({k+dx[i],k1+dy[i]});
                if(x==e-1 && y==e1-1) 
                {
                    c=1;break;
                }
            }

        }
        if(c)
        break;
    }
}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;

        cin>>n;
        map<char,ll>mp;
        char ch='a';
        for(ll i=1;i<=8;i++)
        {
              mp[ch]=i;
              ch+=1;
        }
        while(n--){
        c=0;
         for(ll i=0;i<9;i++)
         {
             for(ll j=0;j<9;j++)
            { dis[i][j]=0;
              visited[i][j]=0;
            }
         }
         string s,w;
         cin>>s>>w;
         x=mp[s[0]];y=s[1]-'0';
         e=mp[w[0]];e1=w[1]-'0';
         if(x-1 == e-1 && y-1 == e1-1)
         cout<<0<<endl;
         else{
         bfs(x-1,y-1);
         cout<< dis[e-1][e1-1] <<endl;
         }

        }
        

    return 0;
}

