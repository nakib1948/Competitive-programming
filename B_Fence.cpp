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
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll i,j,x,y,z,count=0,sum=0,n,m;
    cin>>n>>m;
    ll a[n];
      
    vector<pair<ll,ll>>v;
 
    rep(i,n)
    {
        cin>>a[i];
    }
 
    for(i=0; i<m; i++)
    {
        sum+=a[i];
    }
    v.pb(mp(sum,0));
    x=0,y=m;
    while(x<n && y<n)
    {
        sum+=a[y]-a[x];
        x++;
        y++;
        v.pb(mp(sum,x));
    }
 
    sort(v.begin(),v.end());
 
    cout<<v[0].second+1<<endl;
 


    return 0;
}

