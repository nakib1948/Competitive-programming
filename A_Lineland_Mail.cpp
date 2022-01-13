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
        for(ll i=0;i<n;i++)
        {
            if(i==0)
            {
                cout<< abs(a[i]-a[i+1])<<" "<<abs(a[n-1]-a[i])<<endl;
            }
            else if(i==n-1)
            {
                cout<<abs(a[i]-a[i-1])<<" "<<abs(a[i]-a[0])<<endl;
            }
            else 
            {
                cout<<min(abs(a[i]-a[i-1]),abs(a[i+1]-a[i]))<<" "<<max(abs(a[i]-a[0]),abs(a[n-1]-a[i]))<<endl;
            }
        }
    


    return 0;
}

