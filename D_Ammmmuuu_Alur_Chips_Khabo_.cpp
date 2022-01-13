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
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y=0,z=0,count=0,sum=0,ans=0,n,m;
        cin>>n>>m;
        ll a[n];
        vector<ll>v;
        rep(i,n)
        {
            cin>>a[i];
            v.pb(a[i]);
        }
       
       
        for(ll i=0;i<(m-1);i++)
        {
            v.pb(a[i]);
        }
        for(ll i=0;i<m;i++)
        {
            sum+=v[i];
        }
        ans=max(ans,sum);
        x=0,z=m;
        while(x<v.size() && z<v.size())
        {
            
            sum+=v[z]-v[x];
            ans=max(ans,sum);
            x++;
            z++;
            
        }
        cout<<ans<<endl;
    }


    return 0;
}

