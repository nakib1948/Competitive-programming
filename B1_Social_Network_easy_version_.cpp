#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
   ll i, j, x, y, z, count = 0, sum = 0, n;
   cin >> n>>x;
   map<ll,ll>mp;
   vector<ll>v;
   queue<ll>q;
   rep(i,n)
   {
       ll k;
      cin>>k;
      if(mp[k]==0)
      {
          mp[k]=1;
          q.push(k);
          if(q.size()>x)
          {
              ll j=q.front();
              q.pop();
              mp[j]=0;
          }
      }

   }
   cout<<q.size()<<endl;
   while(!q.empty())
   {
       ll k=q.front();
       v.pb(k);
       q.pop();
   }
   for(ll i=v.size()-1;i>=0;i--)
   {
       cout<<v[i]<<" ";
   }
   cout<<endl;
 
    return 0;
}
