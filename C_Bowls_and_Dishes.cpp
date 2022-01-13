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
        cin>>n>>m;
        vector<pair<ll,pair<ll,ll>> >v;
        vector<pair<ll,ll> >v1;
        for(ll i=0;i<m;i++)
        {
           ll a,b;
           cin>>a>>b;
           v.pb(mp(0,mp(a,b)));
        }
        ll k;
        cin>>k;
        for(ll i=0;i<k;i++)
        {
            cin>>x>>y;
            v1.pb(mp(x,y));
        }
        for(ll i=0;i<k;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(v[j].ff==0)
                {
                    if(v1[i].ff==v[j].ss.ff || v1[i].ff==v[j].ss.ss)
                    {
                        v[j].ff=1;
                    }
                    else if(v1[i].ss==v[j].ss.ff || v1[i].ss==v[j].ss.ss)
                    {
                        v[j].ff=1;
                    }
                    
                }
            }
        }
        for(ll j=0;j<m;j++)
        {
            if(v[j].ff==1)
            count++;
        }
        cout<<count<<endl;

    return 0;
}

