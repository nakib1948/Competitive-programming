#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
ll mx=100005;
vector<ll>v;
bool prime[100005];
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

    ll n,m;
    while(cin>>n>>m)
    {
        bool isprime[m-n+1];
        memset(isprime,true,sizeof(isprime));
        for(ll i=0;i<v.size();i++)
        {
            ll x=v[i],y,z=v[i];
            if(x>m)
            break;
            if(n%x==0)
            y=n;
            else y=((n/x)*x)+x;
            
            if(y==v[i])y+=v[i];
            for(ll j=y;j<=m;j+=z)
            {
                //cout<<j<<endl;
                isprime[j-n]=false;
            }
        }
        vector<ll>v1;
        for(ll i=0;i<(m-n+1);i++)
        {
            if(isprime[i])
            v1.pb(n+i);
        }
        //cout<<v1.size();
        if(v1.size()==1)
        cout<<"There are no adjacent primes."<<endl;
        else{
        vector<pair<ll,pair<ll,ll> > >pa;

        for(ll i=1;i<v1.size();i++)
        {
            pa.pb(mp(v1[i]-v1[i-1],mp(v1[i-1],v1[i])));

        }
        sort(pa.begin(),pa.end());
        ll k=pa.size()-1;
        // for(ll i=pa.size()-1;i>0;i--)
        // {
        //     if(pa[i].ff!=pa[i-1].ff)
        //     {
        //         k=i;
        //         break;
        //     }
        // }
        
         cout<<pa[0].ss.ff<<","<<pa[0].ss.ss<<" are closest, "<<pa[k].ss.ff<<","<<pa[k].ss.ss<<" are most distant."<<endl;

        }
    }



    return 0;
}

