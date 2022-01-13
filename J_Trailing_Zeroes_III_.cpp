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
    ll i=25;
    while(i<=1e9)
    {
        v.pb(i);
        i*=5;
    }
}
int main()
{
    heyyoo;
    get();
    ll t;
    cin>>t;
    for(ll l=1;l<=t;l++)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll low=0,high=1e18+1;
  
        while(low+1<high)
        {
            ll mid=(low+high)/2;
            sum=0;
            for(ll i=0;i<v.size();i++)
            {
                sum+=(mid/v[i]);
            }
            if((sum+(mid/5))>=n)
            {
               high=mid;
            }
            else 
            low=mid;
        }
        sum=0;
        for(ll i=0;i<v.size();i++)
        {
            sum+=(high/v[i]);
        }
        if((sum+(high/5))==n)
        cout<<"Case "<<l<<": "<<high<<endl;
        else 
        cout<<"Case "<<l<<": impossible"<<endl;
    }


    return 0;
}

