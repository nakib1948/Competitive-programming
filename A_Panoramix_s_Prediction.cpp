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
        cin>>n>>m;
        ll a[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
        for(ll i=0;i<15;i++)
        {
            if(a[i]==n)
            {
                if(a[i+1]==m)
                cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                return 0;
            }
        }

    return 0;
}

