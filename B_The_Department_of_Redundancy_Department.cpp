#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
    ll t;
    map<ll,ll>mp;
    vector<ll>v;
    while(cin>>t)
    {
       mp[t]++;
       if(mp[t]==1)
       v.pb(t);
    }
    for(auto it:v)
    cout<<it<<" "<<mp[it]<<endl;


    return 0;
}

