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
        ll i,j,x,y,z,count=0,sum=0;
        double n,m;
        cin>>n>>m;
        double ans=n/(m*m);
        if(ans<=18.0)
        cout<<1<<endl;
        else if(ans>=30)
        cout<<4<<endl;
        else if(ans>=19 && ans<=24)
        cout<<2<<endl;
        else 
        cout<<3<<endl;
    }


    return 0;
}

