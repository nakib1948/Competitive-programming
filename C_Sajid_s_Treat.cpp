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
        ll a[n],b[m];
        rep(i,n)
        {
            cin>>a[i];
        }
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
        }
        j=0;
        for(ll i=0;i<n;i++)
        {
            if(j<m && b[j]>=a[i])
            {
                count++;
                j++;
            }
        }
        cout<<count<<endl;


    return 0;
}

