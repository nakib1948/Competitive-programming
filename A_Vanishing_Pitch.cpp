#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

  
        double x,y,n,m;
        cin>>n>>m>>x>>y;
        double z=y/n;
        if(z>=m && z<=x)
        cout<<"No"<<endl;
        else 
        cout<<"Yes"<<endl;


    return 0;
}

