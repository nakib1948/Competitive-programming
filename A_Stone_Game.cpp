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
        ll i,j,x,y,z,count=0,sum=INT_MAX,n,m;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            count=max(count,a[i]);
            sum=min(sum,a[i]);
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]==sum)
            x=i+1;
            if(a[i]==count)
            y=i+1;
        }
        if(x>y)
        {
            swap(x,y);
        }
       // cout<<x<<" "<<y<<endl;
        ll k=n-y+1+x;
        z=min(y,n-x+1);
        cout<<min(k,z)<<endl;
    }


    return 0;
}

