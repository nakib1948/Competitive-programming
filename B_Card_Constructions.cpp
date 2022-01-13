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
vector<ll>v;
void get()
{
    v.pb(2);v.pb(7);
    ll x=11;
    ll k=15;
    while(1)
    {
        v.pb(k);
        k+=x;
        x+=3;
        if(k>1e9)
        break;
    }
}
int main()
{
    heyyoo;
    get();
   
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        z=lower_bound(v.begin(),v.end(),n)-v.begin();
        if(v[z]!=n)
        z--;
        for(ll i=z;i>=0;i--)
        {
             x=n/v[i];
             count+=x;
             n-=(x*v[i]);
             
             if(n==0)
             break;
        }
        cout<<count<<endl;
    }


    return 0;
}

