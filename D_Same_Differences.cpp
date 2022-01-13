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

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]-=(i+1);
            mp[a[i]]++;
        }

        for(auto it:mp)
        {
            sum+=(it.ss*(it.ss-1)/2);
        }
        cout<<sum<<endl;
    }


    return 0;
}

