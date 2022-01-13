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
        cin>>x>>y;

        if(x==y)
         cout<<2*x<<endl;
         else if(y>x)
         {
             y=y-x;
             cout<< (2*x)+(2*y)-1 <<endl; 
         }
         else
         {
             x=x-y;
             cout<< (2*y)+(2*x)-1 <<endl;
             
         }
         
    }


    return 0;
}

