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
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        vector<ll>v;
        rep(i,n)
        {
            cin>>a[i];
            v.pb(a[i]);
        }

        while(count!=1)
        {
            auto it=v.begin();
            v.erase(it);
            auto it1=v.end();it--;
            v.erase(it1);
            for(ll i=1;i<v.size()-1;i++)
            {
                if(v[i]<v[i+1])
            }
        }
    }


    return 0;
}

