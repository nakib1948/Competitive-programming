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
     
   
        ll i,j,x,y,z,count=0,sum=0,n,k;
        cin>>n>>k;
        n=(2*n)+1;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        for(ll i=1;i<n;i+=2)
        {
            if(k>0 && (a[i]-1)>a[i-1] && (a[i]-1)>a[i+1])
            {
                a[i]--;
                k--;
            }
            if(k==0)
            break;
        }
        
        rep(i,n)
        cout<<a[i]<<" ";
    
        cout<<endl;

    return 0;
}

