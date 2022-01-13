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
        vector<pair<ll,ll> >v;
        cin>>n>>m;
        for(ll i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            v.pb(mp(a,b));
        }
        bool ok=true;z=7-m;
        for(ll i=0;i<v.size();i++)
        {
           ll a[7];
           memset(a,0,sizeof(a));
           count=0;
           for(ll i=1;i<=6;i++)
           {
               a[i]=i;
           }
           a[z]=0;
           a[v[i].ff]=0;
           a[7-v[i].ff]=0;
           a[v[i].ss]=0;
           a[7-v[i].ss]=0;
           for(ll i=1;i<=6;i++)
           {
               if(a[i]!=0){
               count++;
               y=a[i];
               }
           }
           if(count>1)
           {
               ok=false;
               break;
           }
           else
           {
               z=7-y;
           }
           
        }
        
        cout<<(ok ? "YES":"NO")<<endl;

    return 0;
}

