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
        cin>>n>>m;
        
        if(n%m==0)
        cout<<n/3<<" "<<n/3<<" "<<n/3<<endl;
        else if(n&1)
        cout<<1<<" "<<n/2<<" "<<n/2<<endl;
        else
        {
            if((n/2)&1)
            {
                cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
            }
            else
            cout<<n/2<<" "<<(n/2)/2<<" "<<(n/2)/2<<endl;
        }
        
    }


    return 0;
}

