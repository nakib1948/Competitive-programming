#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        map<ll,ll>m1,m2;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            m1[a[i]]=i+1;
        }
        for(ll i=n-1;i>=0;i--)
        {
            m2[a[i]]=i+1;
        }
        vector<pair<ll,ll> >v,v1;
        for(auto it:m1)
        {
            if(m2[it.ff]!=it.ss)
            {
                ll k=m2[it.ff]*
            }
            v.pb(mp(it.ff,it.ss));
        }
        for(auto it:m2)
        {
            v1.pb(it.ff,it.ss);
        }
    }


    return 0;
}

