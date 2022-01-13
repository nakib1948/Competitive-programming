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
vector<ll>v;

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
  
    ll t;
    cin>>t;
    vector<ll>v;
    ll h=2050;
    v.pb(h);
    for(ll i=4;i<=18;i++)
    {
        h*=10;
        v.pb(h);
    }
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
      
        while(n>=2050)
        {
            auto it=upper_bound(v.begin(),v.end(),n);
            it--;
            n-=*it;
            count++;
        }
        if(n==0)
        cout<< count <<endl;

        else cout<< -1 <<endl;

        }
    return 0;
}