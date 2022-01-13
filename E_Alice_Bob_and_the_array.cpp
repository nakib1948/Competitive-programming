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
    ll t,l;
    cin>>t;
    for(l=1;l<=t;l++)
    {
        ll i,j,x,y,z,count=INT_MIN,sum=0,n,found=-1,right=0,left=0;
        cin>>n;
        ll a[n];
        vector<ll>v;
        rep(i,n)
        {
            cin>>a[i];
            count=max(count,a[i]);
            if(a[i]>=0)
            sum+=a[i];
            if(a[i]<0)
            v.pb(i);
        }

        if(v.size()==0)
        {
            cout<<"Case "<<l<<":"<<" "<<sum<<" "<<0<<endl;
        }
        else if(v.size()==1)
            cout<<"Case "<<l<<":"<<" "<<sum<<" "<<1<<endl;
        else if(v.size()==n)
            cout<<"Case "<<l<<":"<<" "<<count<<" "<<0<<endl;
        else
        {
               
               cout<<"Case "<<l<<":"<<" "<<sum<<" "<<v.size()-1<<endl;
        }



    }


    return 0;
}

