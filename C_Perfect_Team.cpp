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
        ll i,j,x,y,z,count=0,sum=0,n,m=0;
        cin>>x>>y>>z;
        j=min(x,min(y,z));
        if(j==x)
        cout<<x<<endl;
        else if(j==y)
        cout<<y<<endl;
        else
        {
            count+=z;
            x-=z;
            y-=z;
            cout<<count+(x+y)/3<<endl;
        }
        
    }


    return 0;
}

