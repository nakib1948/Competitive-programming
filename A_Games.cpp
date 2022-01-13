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
        vector<pair<ll,ll> >v;
        for(ll i=0;i<n;i++)
        {
            cin>>x>>y;
            v.pb(mp(x,y));
        }
        for(ll i=0;i<v.size();i++)
        {
            for(ll j=i+1;j<v.size();j++)
            {
                if(v[i].ff==v[j].ss)
                count++;
                if(v[i].ss==v[j].ff)
                count++;
            }
        }
        cout<<count<<endl;

    return 0;
}

