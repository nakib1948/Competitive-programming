#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
ll gcd(ll a, ll b)
{
    return (b == 0 ? a : gcd(b, a % b));
}
 
ll lcm(ll a, ll b)
{
    return (a * (b / gcd(a, b)));
}
int main()
{
    ll n;
    while(true)
    {
      cin>>n;
      if(n==0)break;
      map<ll,ll>mp;
      ll count=0;
      vector<ll>v;
      for(ll i=1;i*i<=n;i++)
      {
          if(n%i==0)
          {
              if(i==n){
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
                    if(mp[n/i]==0){
                    mp[n/i]++;
                    v.pb(n/i);
                    }
              }
          }
      }
      sort(v.begin(),v.end());
    
      for(ll i=0;i<v.size();i++)
      {
          for(ll j=i+1;j<v.size();j++)
          {
              if(lcm(v[i],v[j])==n)
              count++;
          }
      }

      cout<<n<<" "<<count+1<<endl;
    }
     

    return 0;
}

