#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
ll mx=40000005;
vector<ll>v;
bool prime[40000005];
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
 
    while(true)
    {
        map<ll,ll>mp;
        ll n;
        cin>>n;
        if(n==0)
        break;
       
         for(ll i=0;i<v.size();i++)
        {
            while(1)
            {
                if(n%v[i]!=0)
                break;
                else
                {
                    n/=v[i];
                    mp[v[i]]++;
                }

                if(n==1)
                break;
            }
            if(n==1)
            break;
        }
        for(auto it:mp)
        {
            cout<<it.ff<<"^"<<it.ss<<" ";
        }

        if(n!=1)
        cout<<n<<"^"<<1<<endl;
        else cout<<endl;
    }

    return 0;
}

