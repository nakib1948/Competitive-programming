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
     
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        sort(a,a+n);
       
        for(ll i=0;i<n-2;i++){
        if(((a[i]+a[i+1])>a[i+2])&&((a[i]+a[i+2])>a[i+1])&&((a[i+1]+a[i+2])>a[i]))
        {
            cout<<"YES"<<endl;
            return 0;
        }
        }
        cout<<"NO"<<endl;


    return 0;
}

