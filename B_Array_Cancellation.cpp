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
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }

        rep(i,n)
        {
                sum+=a[i];
                if(sum<0)
                {
                   count+=sum;
                   sum=0;
                }

        }
        ll d1=max(sum,-count);
        ll d2=min(sum,-count);
        cout<<d2+(d1-d2)<<endl;

        
    }


    return 0;
}

