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
    ll i,j,x,y,z,count=0,sum=0,n,m;
    cin>>n;
    ll a[n+1];
    vector<pair<ll,ll> >v;
    rep(i,n)
    {
        cin>>a[i];
        v.pb(mp(a[i],-i));
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<v.size();i++)
    {
        cout<<-v[i].ss<<" ";
    }
    cout<<endl;
      
    return 0;
}

