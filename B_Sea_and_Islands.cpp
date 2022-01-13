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
        cin>>n>>m;
        char a[n+1][n+1];
        for(ll i=1;i<=n;i++)
        {
            if(i&1)
            {
                for(ll j=1;j<=n;j++)
                {
                    if(j&1)
                    {
                      if(count<m) {
                       a[i][j]='L';
                       count++;
                      }
                      else a[i][j]='S';
                    }
                    else a[i][j]='S';
                }
            }
            else
            {
                for(ll j=1;j<=n;j++)
                {
                    if(j&1)
                    a[i][j]='S';
                    else
                    {
                      if(count<m) {
                       a[i][j]='L';
                       count++;
                      }
                      else a[i][j]='S';
                    }
                }
            }
         
        }
        if(count==m)
        {
            cout<<"YES"<<endl;
            for(ll i=1;i<=n;i++){
              for(ll j=1;j<=n;j++){
               cout<<a[i][j];
              }
              cout<<endl;
            }
        }
        else cout<<"NO"<<endl;

    return 0;
}

