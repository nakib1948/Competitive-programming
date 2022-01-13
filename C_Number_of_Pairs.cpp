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

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n>>x>>y;
        vector<ll>v(n);
        
        rep(i,n)
        {
            cin>>v[i];
        }
        
        sort(v.begin(),v.end());
        for(ll i=0;i<v.size();i++)
        {
            ll k=y-v[i],j=x-v[i];
            auto it=lower_bound(v.begin()+i+1,v.end(),j);
            auto it1=upper_bound(v.begin()+i+1,v.end(),k);
            count+=(it1-it);
        }
        cout<<count<<endl;
    }


    return 0;
}

