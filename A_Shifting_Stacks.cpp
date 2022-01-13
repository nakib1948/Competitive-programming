#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
     
        bool check=true;
        for(ll i=0;i<n-1;i++)
        { 
            if(a[i]>=count)
            {
                a[i+1]+=a[i]-count;
                a[i]=count;
            }
            count++;
        }
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]>=a[i+1])
            {
                check=false;
                break;
            }
        }
         cout<<(check ? "YES":"NO")<<endl;
  
    }
   


    return 0;
}