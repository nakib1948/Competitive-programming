#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        ll a[n],b[m+1];
        for(ll i=1;i<=m;i++)
        {
            b[i]=1;
        }
        map<ll,ll>mp;
        rep(i,n)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(auto it:mp)
        {
            if(b[it.ff]==1)
            cout<<it.ss<<endl;
        }
    }


    return 0;
}

