#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

 
#define ll long long
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
 
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,count=0,sum=0,n;
        cin>>n;
        vector<ll>v,v1;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
    
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                v.pb(a[i]);
                v.pb(a[i+1]);
                i++;
            }
            else
            {
                v1.pb(a[i]);
            }
            
        }
        if(v1.size()==0)
        {
            cout<<v.size()/2<<endl;
            for(ll i=0;i<v.size()/2;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(v.size()==0)
        {
            cout<<v1.size()<<endl;
            for(auto x:v1)
              {
                  cout<<x<<" ";
              }
              cout<<endl;
        }
        else
        {
         cout<<v.size()<<endl;
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        }
        
       
       
    }
 
 
    return 0;
}
 
