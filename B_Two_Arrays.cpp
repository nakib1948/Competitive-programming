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
        ll i,j,x,y,z,count=0,sum=0,n,k;
        cin>>n>>k;

        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }

       if(k%2==1)
       {
           for(ll i=0;i<n;i++)
           {
               if(a[i]%2==0)
               cout<<0<<" ";
               else
               {
                   cout<<1<<" ";
               }
               
           }
           cout<<endl;
       }
       else
       {
           for(ll i=0;i<n;i++)
           {
               if(a[i]<(k/2))
               cout<<0<<" ";
               else if(a[i]>(k/2))
               cout<<1<<" ";
               else if(a[i]==k/2)
               {
                   if(count%2==0)
                   {
                         cout<<0<<" ";
                         count++;
                   }
                   else
                   {
                       cout<<1<<" ";
                       count++;
                   }

               }
           }
           cout<<endl;
       }
    }

    return 0;
}

