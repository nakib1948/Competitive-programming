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
        while(n--)
        {
            cin>>x>>y;
            v.pb(mp(x,y));
        }
        bool ok=true;
        for(ll i=0;i<v.size();i++)
        {
            if(v[i].ff != v[i].ss)
            {
                ok=false;
            }
        }
        if(!ok)
        {
            cout<<"rated"<<endl;
        }
        else
        {
          for(ll i=1;i<v.size();i++)
          {
            if(v[i-1].ff < v[i].ff)
            {
                ok=false;
                break;
            }
          }
          if(!ok)
          cout<<"unrated"<<endl;
          else 
          cout<<"maybe"<<endl;
        }
        
    return 0;
}

