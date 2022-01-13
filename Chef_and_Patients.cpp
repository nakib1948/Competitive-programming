#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        vector<pair<ll,ll> >v,v1;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            v.pb(mp(a[i],-i));
        }
        memset(a,0,sizeof(a));
        sort(v.rbegin(),v.rend());
      
        for(ll i=0;i<v.size();i++)
        {
            ll k=-v[i].ss;
            a[k]=i+1;
        }
        for(ll i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

