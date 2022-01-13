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
        ll i,j,x,y,z,count=0,k,sum=-10000000000000,n;
        cin>>n>>k;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            sum=max(sum,a[i]);
        }

        while(k!=0)
        {
            k--;
            rep(i,n)
            {
               
               a[i]=sum-a[i];
                
            }
            if(k==0)
            {
                break;
            }

        }

        rep(i,n)
        {
            cout<<a[i]<<" ";
        }

        cout<<endl;
    }


    return 0;
}

