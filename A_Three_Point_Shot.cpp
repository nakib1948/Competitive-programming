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
        count=max(x,y);
        sum=min(x,y);
        if((sum+3)>count)
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;


    return 0;
}

