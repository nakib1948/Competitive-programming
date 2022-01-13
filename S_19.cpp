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
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        ll a[n];
        map<ll,ll>mp;
        rep(i,n)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            ll k=a[i];
            vector<ll>v;
            while(k>0)
            {
                v.pb(k%2);
                k=k/2;
            }
            mp[v.size()]++;
        }
        for(auto x:mp)
        {
            if(x.ss>1)
            {
                sum+=(x.ss*(x.ss-1))/2;
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}

