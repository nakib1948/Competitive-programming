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
        vector<ll> v,a(n),b(n);
        rep(i,n)
        {
            cin>>a[i];
        }
        rep(i,n)
        {
            cin>>b[i];
        }
        rep(i,n)
        {
            if(b[i]==0)
            {
                v.pb(a[i]);
                a[i]=0;
            }
        }
        sort(v.begin(),v.end(),greater<ll>());
        j=0;
        rep(i,n)
        {
            if(b[i]==0)
            {
                a[i]=v[j];
                j++;
            }
        }
        for(ll i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

