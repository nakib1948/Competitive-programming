#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

ll v[8005];

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        for(ll j=0;j<8005;j++)
        {
            v[j]=0;
        }
        ll i,count=0,sum=0,n,found=0;
        
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
          
            count=max(count,a[i]);
        }
        
        for(ll i=0;i<n-1;i++)
        {
            sum=a[i];
            for(ll j=i+1;j<n;j++)
            {
                sum+=a[j];
                 if(sum<=count)
                 {
                   v[sum]=1;
                 }
                 else
                   break; 
               
            }
        }
        for(ll i=0;i<n;i++)
        {
            found+=v[a[i]];
        }

        cout<<found<<endl;

       
    }


    return 0;
}

