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
        ll a[n],b[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        rep(i,n)
        {
            cin>>b[i];
        }
        rep(i,n)
        {
            sum+=(a[i]*b[i]);
        }
        cout<<(sum==0 ? "Yes":"No")<<endl;
    


    return 0;
}

