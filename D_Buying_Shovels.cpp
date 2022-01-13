#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
ll check(ll x)
{
    ll count = 0;
    for(ll i=2; i*i<=x; i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if(count==0)
        return 1;
    else
        return -1;
}

int main()
{
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=1,n,k;
       
        cin>>n>>k;
        if(check(n)==1)
        {
             if(k>=n)
             cout<<"1"<<endl;
            else
            {
                cout<<n<<endl;
            }
            
        }
        else
        {
            if(k==1)
             cout<<n<<endl;
             else if(k>=n)
             cout<<"1"<<endl;
            else
            {
               
                for(ll i=1;i*i<=n;i++)
                {
                    if(n%i==0)
                    {
                        if((n/i)<=k)
                        sum=max(sum,n/i);
                        if(i<=k)
                        sum=max(sum,i);
                    }
                }
            
                cout<<n/sum<<endl;
            }
            
        }
        
        
    }


    return 0;
}

