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
    ll i,j,x,y,z,count=0,sum=0,n,m;
    vector<pair<ll,ll> >v;
    cin>>n>>m;
    ll a[n+1];
    memset(a,0,sizeof(a));
    rep(i,n)
    {
        cin>>x>>y;
        v.pb(mp(x,-y));
    }
    sort(v.rbegin(),v.rend());
 
    for(ll i=0;i<v.size();i++)
    {
        for(ll j=0;j<v.size();j++)
        {
            if(v[i].ff==v[j].ff && v[i].ss==v[j].ss)
            {
                a[i+1]++;
            }
        }
    }
    cout<<a[m]<<endl;


    return 0;
}

