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
  
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        vector<vector<ll > >v;
        for(ll i=0;i<m;i++)
        {
            cin>>x;
            vector<ll>v1;
            for(ll j=0;j<x;j++)
            {
                cin>>y;
                v1.pb(y);
            }
            v.pb(v1);
        } 
             

    return 0;
}

