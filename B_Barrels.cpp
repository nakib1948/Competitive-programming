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
        ll i,j,x,y,z,count=0,sum=0,n,k;
        cin>>n>>k;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        sum=a[n-1];
        for(ll i=n-2;i>=0;i--)
        {
            sum+=a[i];
            k--;
            if(k==0)
            {
                break;
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}

