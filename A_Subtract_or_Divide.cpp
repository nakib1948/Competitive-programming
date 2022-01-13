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
        if(n==2)
         cout<<1<<endl;
         else if(n==3)
         cout<<2<<endl;
         else if(n==0 || n==1)
         cout<<0<<endl;
         else if((n&1)==0)
            {
               cout<<2<<endl;
            }
            else
            {
               cout<<3<<endl;
            }
    }


    return 0;
}

