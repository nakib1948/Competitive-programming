#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
        ll i,j,x,y,ans=0,z,count=0,sum=0,n,energy=0;
        cin>>n;
        ll a[n];
        rep(i,n){cin>>a[i];}
        for(ll i=0;i<n-1;i++)
        {
            sum=a[i]-a[i+1];
            if(sum>0)
            energy+=sum;
            else if(sum<0)
            energy-=abs(sum);
            if(energy<0)
            {ans+=abs(energy);energy=0;}
            sum=0;
        }
        cout<<ans+a[0]<<endl;


    return 0;
}

