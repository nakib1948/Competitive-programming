#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

    ll n;
    vector<ll>v;
    while(1)
    {
        cin>>n;
        if(n==0)
        break;
        v.clear();
        for(ll i=0;i<n;i++)
        {
           ll x; cin>>x;
            v.pb(x);
        }
        ll count=0,z;
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(gcd(v[i],v[j])==1)
                {count++;}
            }
        }
        z=(n*(n-1))/2;
        if(count==0)
        cout<<"No estimate for this data set."<<endl;
        else 
        {    
         cout<<fixed<<setprecision (6) << sqrt(6*z*1.0/count)<<endl;
        }
    
    }


    return 0;
}

