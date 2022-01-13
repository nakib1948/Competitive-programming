#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll totient(ll n)
{
    ll x=n,ans=n;
    for(ll i=2;i*i <= n ;i++)
    {
        if(n%i==0)
        {
            ans/=i;
            ans*=(i-1);
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n>1)
    {
       ans/=n;
       ans*=(n-1);
    }
    return ans;
}

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        cout<<totient(n)<<"\n";
    }


    return 0;
}

