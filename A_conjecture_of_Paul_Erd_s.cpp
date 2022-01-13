#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
ll mx=10000005;
vector<ll>v,a(10000005,0);
bool prime[10000005];
void seive()
{
    memset(prime, true, sizeof(prime));

    for (ll p=2; p*p<=mx; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*p;i<=mx;i+=p)
                prime[i] = false;
        }
    }

     for (ll p=2;p<=mx;p++)
        if (prime[p])
            v.pb(p);
}
int main()
{
    seive();
    vector<ll>v1,v2;
    for(ll i=1;;i++)
    {
        if(i*i<=10000000)
        v1.pb(i*i);
        else break;
    }
    for(ll i=1;;i++)
    {
        if((i*i*i*i)<=10000000)
        v2.pb(i*i*i*i);
        else break;
    }
  
    for(ll i=0;i<v1.size();i++)
    {
        for(ll j=0;j<v2.size();j++)
        {
            ll x=v1[i]+v2[j];
            if(x<=10000000)
            {
                if(prime[x])
                a[x]=1;
            }
        }
    }
   
    for(ll i=1;i<=10000000;i++)
    {
        a[i]+=a[i-1];
    }
   
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        cout<<a[n]<<endl;
    }


    return 0;
}

