#include<bits/stdc++.h>
using namespace std; 

#define ll long long


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,c=0,s=0,n,x,ans=0;
        cin>>n>>x;

        ll a[n];
      
        for(i=0;i<n;i++)
        {
          cin>>a[i];
          
          if(a[i]%x!=0)
          {
              s+=(a[i]/x)+1;
              c+=a[i];
          }
          else
          {
               s+=(a[i]/x);
              ans+=(a[i]/x);
          }
          
        }
        if(c%x!=0)
        c=(c/x)+1;
        else 
        c=c/x;
        cout<<(ans+c)<<" "<<s<<endl;

    }


    return 0;
}

