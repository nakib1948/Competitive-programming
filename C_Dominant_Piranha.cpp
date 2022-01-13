#include<bits/stdc++.h>
using namespace std; 

#define kk ios::sync_with_stdio(false); cin.tie(0);
#define ll long long



int main()
{
     
    kk;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,count=0,sum=0,n,k;
        cin>>n;

        ll b[n];
        for(i=0;i<n;i++)
        {
           cin>>b[i];
           count=max(count,b[i]);
        }

        for(ll i=0;i<n;i++)
        {
            if(count==b[i])
            {
                if(i==n-1)
                {
                    if(b[i]>b[i-1])
                    {
                        k=i+1;
                        sum=1;
                    }
                    else
                    {
                        continue;
                    }
                    
                }
                else if(i==0)
                {
                    if(b[i]>b[i+1])
                    {
                        k=i+1;
                        sum=1;
                    }
                    else
                    {
                        continue;
                    }
                    
                }
                else{
                if(b[i]>b[i+1]||b[i]>b[i-1])
                {
                   sum=1;
                   k=i+1;
                }
                else
                {
                    continue;
                }
                }
                
            }
        }
       if(sum==1)
       cout<<k<<endl;
       else
       cout<<"-1"<<endl;
       
        
    }


    return 0;
}

