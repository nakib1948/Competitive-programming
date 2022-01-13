#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n+1];
        rep(i,n)
        {
            cin>>a[i];
        }
        for(ll i=n;i>=1;i--)
        {
            ll sum=0;
            sum+=a[i];
            if((i+a[i])<=n)
            {
                sum+=a[i+a[i]];
               
            }
              a[i]=sum;
              count=max(count,a[i]);
           
        }
        cout<<count<<endl;
    }


    return 0;
}

