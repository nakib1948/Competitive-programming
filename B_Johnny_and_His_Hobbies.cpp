#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,y,z,count=0,sum=0,n,sum1=1000000;
        cin>>n;
        map<ll,ll>mp;
        ll a[n];

        rep(i,n)
        {
            cin>>a[i];
            mp[a[i]]=1;
        }

        bool ok=true;

        for(j=1;j<=1023;j++)
        {
            count=0;
            rep(i,n)
            {
               ll x=a[i]^j;
                if(mp[x]==1)
                {
                    count++;
                }
            }
            if(count==n)
            {
                ok=false;
                 cout<<j<<endl;
                break;
            }
        }
        if(ok)
         cout<<"-1"<<endl;

    }


    return 0;
}

