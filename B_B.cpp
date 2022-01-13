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
    for(ll j=1;j<=t;j++)
    {
        ll i,x,y,z,count=1,sum=0,n,m;
        cin>>n>>m;
        vector<ll>v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        cout<<"Case "<<j<<":"<<endl;
        while(m--)
        {
            cin>>x>>y;
            auto it=lower_bound(v.begin(),v.end(),x);
            auto it1=upper_bound(v.begin(),v.end(),y);
          
            cout<< it1-it <<endl;
           
        }
       
    }


    return 0;
}

