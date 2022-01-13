#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
ll mx=1000005;
vector<ll>v;
bool prime[1000005];
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
    ll i,j,x,y,z,count=0,sum=0,n,m;
    while(true)
    {
        cin>>n;
        if(n==0)
        break;
        for(ll i=1;i<v.size();i++)
        {
            x=n-v[i];
            if(prime[x]){
            cout<<n<<" = "<<v[i]<<" + "<<x<<endl;
            break;
            }
        }


    }

    return 0;
}

