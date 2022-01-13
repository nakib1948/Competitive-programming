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
        for(ll i=1;i<n;i++)
        {
            if(a[i-1]>a[i])
            {
                count+=a[i-1]-a[i];
            }
        }
        cout<<count<<endl;
    }


    return 0;
}

