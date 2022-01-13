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
        cin>>x>>y;
        z=max(x,y);
        for(ll i=z;i<=6;i++)
        {
            count++;
        }
        if(count==1)cout<<1<<"/"<<6<<endl;
        else if(count==2)cout<<1<<"/"<<3<<endl;
        else if(count==3)cout<<1<<"/"<<2<<endl;
        else if(count==4)cout<<2<<"/"<<3<<endl;
        else if(count==5)cout<<5<<"/"<<6<<endl;
        else if(count==6)cout<<1<<"/"<<1<<endl;

    return 0;
}

