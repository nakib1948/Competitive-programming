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
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        scanf("%lld",&n);
        vector<pair<ll,ll> >v;
        while(n--)
        {
            scanf("%lld %lld",&x,&y);
            v.pb(mp(x,-y));
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<v.size();i++)
        {
            printf("%lld %lld\n",v[i].ff,(-v[i].ss));
        }
    }


    return 0;
}

