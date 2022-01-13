#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
bool check(ll x)
{
    for(ll i=3;i*i<=x;i++)
    {
        if(x%i==0)
        return true;
    }
    return false;
}
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
         
        ll i,j,x,y,z,count=0,sum=0,n,m,mx=100005;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<endl;
        }
        else
        {
            if(!check(n))
            cout<<1<<endl;
            else{
             vector<ll>v;
             ll a[mx+1];
             for(ll i=2; i<=mx; i++)
             {
                a[i]=i;
             }

             for(ll i=2; i<=mx; i+=2)
             {
               a[i]=2;
             }

             for(ll i=3; i<=mx; i+=2)
             {
                if(a[i]==i)
                {
                   for(ll j=i; j<=mx; j+=i)
                   {
                       if(a[j]==j)
                       {
                        a[j]=i;
                       }
                    }
                }

               }
               for(ll i=3;i<=mx;i+=2)
               {
                  if(a[i]==i)
                  {
                     v.pb(i);
                  }
               }
               
                 for(ll i=0;i<v.size();i++)
                {
                   if(v[i]<=n && n%v[i]==0)
                    {
                      while(n%2!=0)
                      {
                         n-=v[i];
                         count++;
                       }
                    }
                }
                    cout<<count+(n/2)<<endl;
            }               
        }
        
    


    return 0;
}
