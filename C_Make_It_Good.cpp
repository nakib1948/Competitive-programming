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
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
 
        for( i=n-1;i>=1;i--)
        {
            if(a[i]>a[i-1])
            break;
        }
        for(;i>=1;i--)
         {
            if(a[i-1]>a[i])
             {
              break;
             }
        }
        cout<<i<<endl;
 
    }
 
 
    return 0;
}