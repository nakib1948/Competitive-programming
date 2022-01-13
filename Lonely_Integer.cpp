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
   
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        ll a[n],b[32]={};
        rep(i,n)
        {
            cin>>a[i];
        }

        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<32;j++)
            {
                if(a[i]&(1<<j))
                {
                    b[j]++;
                }
            }
        }

        for(ll j=0;j<32;j++)
        {
            if(b[j]%2==1)
            {
                sum+=pow(2,j);
            }
        }

        cout<<sum<<endl;

    return 0;
}

