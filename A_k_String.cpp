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
        cin>>n;
        map<char,ll>mp;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        bool ok=true;
        vector<char>v;
        for(auto it:mp)
        {
              if(it.ss %n !=0)
              {
                  ok=false;
                  break;
              }
              else 
              {
                  for(ll i=1;i<=(it.ss/n);i++)
                  {
                      v.pb(it.ff);
                  }
              }
        }
        if(ok)
        {
            for(ll i=1;i<=n;i++)
            {
                for(ll j=0;j<v.size();j++)
                {
                    cout<<v[j];
                }
            }
        }
        else 
        cout<<"-1"<<endl;


    return 0;
}

