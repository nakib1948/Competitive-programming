#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define kk ios::sync_with_stdio(false); cin.tie(0);
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
ll lcm(ll a, ll b){return (a * (b / gcd(a, b)));}

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    kk;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        map<ll,ll>mp;
        
        ll a[n],b[n];
        rep(i,n)
        {
            cin>>a[i];
            b[a[i]]=i;
            mp[a[i]]++;
        }
        bool ok=true;
        for(auto it:mp)
        {
            if(it.ss==1)
            {
                ok=false;
                cout<<b[it.ff]+1<<endl;
                break;
            }
        }
        if(ok)
        cout<< -1 <<endl;
    }


    return 0;
}

