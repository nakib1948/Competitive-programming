#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
ll lcm(ll a, ll b){return (a * (b / gcd(a, b)));}

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        vector<pair<ll,ll> >v;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            v.pb(mp(a[i],i));
        }
        sort(v.rbegin(),v.rend());
        for(ll j=v[0].ss;j<n;j++)
        {
            cout<<a[j]<<" ";
        }
        ll m=v[0].ss;
        for(ll i=1;i<v.size();i++)
        {
            if(v[i].ss>=m)
            continue;
            else{
            for(ll j=v[i].ss;j<m;j++)
            {
                cout<<a[j]<<" ";
                count=1;
            }
            m=v[i].ss;
            }
            if(m==0)
            break;
           
        }
        cout<<endl;
    }


    return 0;
}

