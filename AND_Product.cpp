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
        cin>>x>>y;
        z=y-x;
        j=1;
        for(ll i=0;i<=32;i++)
        {
           
            if((j<<i)<z)
            continue;
            else
            {
                if(x&(j<<i) && y&(j<<i))
                sum+=j<<i;
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}

