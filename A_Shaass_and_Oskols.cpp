#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
     ll i,j,x,y,z,count=0,sum=0,n,m;
     cin>>n;
     ll a[n+2];

     for(ll i=1;i<=n;i++)
     {
         cin>>a[i];
     }
     cin>>m;
     while(m--)
     {
         cin>>x>>y;
         ll k=a[x]-y;
         ll k1=y-1;
         a[x]=0;
         a[x+1]+=k;
         a[x-1]+=k1;
     }
    
     for(ll i=1;i<=n;i++)
     {
         cout<<a[i]<<endl;
     }


    return 0;
}

