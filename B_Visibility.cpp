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

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

      heyyoo;
      ll i,j,x,y,z,count=0,sum=0,n,m;
      cin>>n>>m>>x>>y;
      x--;y--;
      char a[n][m];
      rep(i,n)
      {
          for(ll j=0;j<m;j++)
          {
              cin>>a[i][j];
          }
      }
   
      for(ll i=y;i<m;i++)
      {
          if(a[x][i]=='.')
          count++;
          else break;
      }
        for(ll i=y-1;i>=0;i--)
      {
          if(a[x][i]=='.')
          count++;
          else break;
      }

      for(ll i=x-1;i>=0;i--)
      {
          if(a[i][y]=='.')
          count++;
          else break;
      }
       for(ll i=x+1;i<n;i++)
      {
          if(a[i][y]=='.')
          count++;
          else break;
      }
        cout<<count<<endl;

    return 0;
}

