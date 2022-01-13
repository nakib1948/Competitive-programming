#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define kk ios::sync_with_stdio(false); cin.tie(0);
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    kk;
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
        for(ll i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                count++;
                x=i;
                break;
            }
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]==1)
            {
                y=i;
                count++;
                break;
            }
        }
        for(ll i=x;i<=y;i++)
        {
            if(a[i]==0)
            sum++;
        }
        if(x==y)
        cout<<0<<endl;
        else
        {
            cout<<sum<<endl;
        }
        
    }


    return 0;
}

