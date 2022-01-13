#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x=0,y,z,count=0,sum=0,n,k;
        cin>>n>>k;
        ll a[n],b[n],c[n];
        rep(i,n)
        {cin>>a[i];}
        rep(i,n){cin>>b[i];}
        sort(b,b+n,greater<ll>());
        sort(a,a+n);
        bool ok=true;
        for(ll i=0;i<n;i++)
        {
          if(a[i]+b[i]<=k){ ok=true;}
          else {ok=false;break;}
        }
        cout<<(ok ? "Yes":"No")<<endl;
    }


    return 0;
}

