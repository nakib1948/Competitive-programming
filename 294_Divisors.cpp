#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;

int main()
{
    ll t;
    cin>>t;
 
    while(t--)
    {
      ll i=0,j,y,z,count=0,sum=0,n,m;
      cin>>n>>m;
     
      ll a[10005];
      for(ll l=n;l<=m;l++){
      map<ll,ll>mp;
      vector<ll>v;
      for(ll i=1;i*i<=l;i++)
      {
          if(l%i==0)
          {
              if(i==l){
                    if(mp[i]==0){
                    mp[i]++;
                    v.pb(i);
                    }
              }
              else{
                    if(mp[i]==0){
                    mp[i]++;
                    v.pb(i);
                    }
                    if(mp[l/i]==0){
                    mp[l/i]++;
                    v.pb(l/i);
                    }
              }
          }
      }
        ll x=v.size();

        a[l-n]=x;
        sum=max(sum,x);

      }
      for(ll i=0;i<=(m-n);i++){
       if(sum==a[i]){
       cout<<"Between "<<n<<" and "<<m<<", "<<n+i<<" has a maximum of "<<a[i]<<" divisors."<<endl;
       break;
       }
      }
    }
     

    return 0;
}

