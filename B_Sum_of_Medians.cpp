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
        x=n*k;
        ll a[x];
        for(ll i=0;i<x;i++)
        {
            cin>>a[i];
        }
        if((n&1)==1)y=(n/2)+1;
        else y=n/2;
        z=n-y;
        i=x-z-1;
        while(k--)
        {
           // cout<<a[i]<< " ";
            sum+=a[i];
            i-=z+1;
        }
       
        cout<<sum<<endl;
    }


    return 0;
}

