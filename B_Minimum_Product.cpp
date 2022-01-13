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
        ll i,j,a,b,x,y,z,count=0,sum=0,n;
        cin>>a>>b>>x>>y>>n;
        vector<ll>v;
        if(a>=b)
        {
           if((b-y)>=n)
           {
              v.pb(a*(b-n));
           }
           else
           {
               if((n-(b-y))>=(a-x))
               {
                   v.pb(x*y);
               }
               else
               {
                   ll k=n-(b-y);
                   v.pb((a-k)*y);
                  ll q=n-(a-x);
                  v.pb((b-q)*x);
               }
               
           }
           
        }
        else if(b>a)
        {
             if((a-x)>=n)
           {
              v.pb(b*(a-n));
           }
           else
           {
               if((n-(a-x))>=(b-y))
               {
                   v.pb(x*y);
               }
               else
               {
                   ll k=n-(a-x);
                   v.pb((b-k)*x);
                  ll q=n-(b-y);
                   v.pb((a-q)*y);
               }
               
           }
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
        
    }


    return 0;
}

