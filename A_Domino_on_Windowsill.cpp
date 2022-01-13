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
        ll i,j,x,y,z,count=0,sum=0,n,k,k1;
        cin>>n>>k>>k1;
        cin>>x>>y;
        sum=2*min(k,k1)+max(k,k1)-min(k,k1);
        count=2*min(n-k,n-k1)+max(n-k,n-k1)-min(n-k,n-k1);
        if(sum>=(2*x) && count>=(2*y))
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}

