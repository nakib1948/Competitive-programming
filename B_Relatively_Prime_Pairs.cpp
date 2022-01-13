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
     
     ll x,y;
     cin>>x>>y;
     cout<<"YES"<<endl;

     ll z=(y-x+1)/2,r=x+1;

     for(ll i=0;i<z;i++)
     {
         cout<<x<<" "<<r<<endl;
         x+=2;
         r+=2;
     }


    return 0;
}

