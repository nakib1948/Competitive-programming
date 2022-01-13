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
        ll a[n];
        vector<ll>v,v1,v2;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]==1)v.pb(i+1);
            else if(a[i]==2)v1.pb(i+1);
            else if(a[i]==3)v2.pb(i+1);
        }
        if(v.size()>0 && v1.size()>0 && v2.size()>0)
        {
            ll k=min(v.size(),min(v1.size(),v2.size()));
            cout<<k<<endl;
            for(ll i=0;i<k;i++)
            {
                cout<<v[i]<<" "<<v1[i]<<" "<<v2[i]<<endl;
            }
        }
        else 
        cout<<0<<endl;

    return 0;
}

