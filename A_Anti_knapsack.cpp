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
        ll i,j,x,y,z=0,count=0,sum=0,n,m;
        cin>>n>>m;
        vector<ll>v;
        z=ceil(m*1.0/2);
        for(ll i=z;i<m;i++)
        {
            v.pb(i);
        }
        cout<<v.size()+(n-m)<<endl;
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        for(ll i=m+1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }


    return 0;
}

