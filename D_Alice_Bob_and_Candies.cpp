#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,alice=0,bob=0,move=0;
        cin>>n;
        deque<ll>dq;
        ll a[n];
        cin>>x;
        for(ll i=1;i<n;i++)
        {
            cin>>a[i];
            dq.pb(a[i]);
        }
   
        sum=x;
        move=1;
        ll alicesum=x,bobsum=0;
        while(dq.size()>0)
        {
          if(bob==0)
          {
              while(dq.size()>0 && bobsum<=alicesum)
              {
                  ll bb=dq.back();
                  bobsum+=bb;
                  dq.pop_back();
              }
              count+=bobsum;
              alicesum=0;
              move++;
              bob=1;
              
          }
          else
          {
              while(dq.size()>0 && alicesum<=bobsum)
              {
                  ll aa=dq.front();
                  alicesum+=aa;
                  dq.pop_front();
              }
              sum+=alicesum;
              bobsum=0;
              move++;
              bob=0;
          }


        }
        cout<<move<<" "<<sum<<" "<<count<<endl;
    }


    return 0;
}

