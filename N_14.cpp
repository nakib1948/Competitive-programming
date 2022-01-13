#include<bits/stdc++.h>
using namespace std; 

#define ll long long
ll x[1000005];
int main()
{
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
     ll j, a, b, c, d, e, f,count=0,sum=0,n;
    
     cin>>a>>b>>c>>d>>e>>f>>n;
    if( n == 0 ) 
    cout<<"Case "<<i<<": "<<a%10000007<<endl;
    else if( n == 1 )
    cout<<"Case "<<i<<": "<<b%10000007<<endl;
    else if( n == 2 ) 
     cout<<"Case "<<i<<": "<<c%10000007<<endl;
    else if( n == 3 ) 
     cout<<"Case "<<i<<": "<<d%10000007<<endl;
    else if( n == 4 ) 
     cout<<"Case "<<i<<": "<<e%10000007<<endl;
    else if( n == 5 ) 
     cout<<"Case "<<i<<": "<<f%10000007<<endl;
    else if(n == 6)
    cout<<"Case "<<i<<": "<<(a+b+c+d+e+f)%10000007<<endl;
    else
    {
       ll sum1=a+b+c+d+e+f;
       x[0]=a;x[1]=b;x[2]=c;x[3]=d;x[4]=e;x[5]=f;x[6]=sum1;
    
        for(ll l=7;l<=n;l++)
        {
            sum=0;
            for(ll i=l-6;i<l;i++)
            {
                sum+=x[i];
            }
            sum=sum%10000007;
            x[l]=sum;
        }
        cout<<"Case "<<i<<": "<<x[n]<<endl;
    }
    
    }


    return 0;
}

