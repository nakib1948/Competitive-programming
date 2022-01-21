#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
        ll n,l,a1,sum=0;
        cin>>n>>l>>a1;

        ll a[n],b[n];
        for(ll i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
        }
      


        if(n==0){
            cout<<l/a1<<endl;
        }
        else if(n==1)
        {
            sum+=((a[0])/a1);
            sum+=((l-(a[0]+b[0]))/a1);
            cout<<sum<<endl;
        }
        else{
            for(ll i=0;i<n-1;i++)
            {
                ll k=a[i]+b[i];
               
                 sum+=((a[i+1]-k)/a1);
            
            }
          
            sum+=((a[0])/a1);
            sum+=((l-(a[n-1]+b[n-1]))/a1);
            cout<<sum<<endl;
        }
    
}
