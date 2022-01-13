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
 
        ll i,j,x,y,z,count=0,sum=1,n,m;
        cin>>n;
        ll a[n];
        vector<ll>v;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]&1)v.pb(i+1);
        }
        if(v.size()==0)cout<<0<<endl;
        else{
        for(ll i=1;i<v.size();i++)
        {
            sum*=(v[i]-v[i-1]);
        }
        cout<<sum<<endl;
        }
    return 0;
}

