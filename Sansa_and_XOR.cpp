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
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        ll a[n];
        vector<pair<ll,ll> >v;
        rep(i,n)
        {
            cin>>a[i];
        }

        for(ll i=0;i<n;i++)
        {
            ll k=(i+1)*n;
            v.pb(mp(a[i],k));
        }
        for(ll i=0;i<v.size();i++)
        {
            if((v[i].ss)%2==1)
            {
                sum=sum^v[i].ff;
            }

        }
        cout<<sum<<endl;
    }


    return 0;
}

