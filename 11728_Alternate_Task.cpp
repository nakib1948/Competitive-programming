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
    vector<ll>v1;
    v1.pb(0);
    for(ll l=1;l<=1000;l++){
     ll sum=0,x=l;
         map<ll,ll>mp;
      for(ll i=1;i*i<=x;i++)
      {
          if(x%i==0)
          {
              if(i==x){
                    if(mp[i]==0){
                    mp[i]++;
                     sum+=i;
                    }
              }
              else{
                    if(mp[i]==0){
                    mp[i]++;
                     sum+=i;
                    }
                    if(mp[x/i]==0){
                    mp[x/i]++;
                    sum+=(x/i);
                    }
              }
          }
      
       }
        v1.pb(sum);
    }
    ll t,count=1,sum=0;
 
    while(true)
    {
      cin>>t;
      if(t==0)
      break;
      sum=0;
      //debug;
      for(ll i=1000;i>=1;i--)
      {
        
              if(v1[i]==t)
              {
                  sum=1;
                  cout<<"Case "<<count<<": "<<i<<endl;
                  break;
              }
      }
      if(sum==0)cout<<"Case "<<count<<": "<<-1<<endl;
      count++;
    }
     

    return 0;
}

