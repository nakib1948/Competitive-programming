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
   
        ll i,j,x,y,z,count=0,sum=1000000000000,n,m;
        string s;
        cin>>n>>s;
        vector<pair<char,ll> >v,v1;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        for(ll i=0;i<s.size()-1;i++)
        {
            if(s[i]=='R' && s[i+1]=='L')
            {
                 v.pb(mp(s[i],i));
            }
        }
    
        reverse(v.begin(),v.end());
       
       for(ll i=0;i<v.size();i++)
       {
           if(v[i].ss==n-1)
           continue;
           else 
           {
                ll take=a[v[i].ss + 1]-a[v[i].ss];
                take/=2;
                sum=min(sum,take);
           }

       }
       
        if(sum==1000000000000)
        cout<<"-1"<<endl;
        else 
        cout<<sum<<endl;

    return 0;
}

