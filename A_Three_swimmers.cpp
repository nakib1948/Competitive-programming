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
        cin>>n>>x>>y>>z;
        count=min(x,min(y,z));
        sum=max(x,max(y,z));
        if(n<=count)
        {
            cout<<count-n<<endl;
        }
        else 
        {
           ll k=ceil(n*1.0/x);
           ll k1=ceil(n*1.0/y);
           ll k2=ceil(n*1.0/z);
           ll ans=(k*x)-n;
           ll ans1=(k1*y)-n;
           ll ans2=(k2*z)-n;
           cout<<min(ans,min(ans1,ans2))<<endl;
        }
        
    }


    return 0;
}

