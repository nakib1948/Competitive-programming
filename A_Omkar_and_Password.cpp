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
        ll i,j,x,y,z,count=1,sum=0,ans=1,n;
        cin>>n;
        ll a[n];
        vector<ll>v;
        rep(i,n)
        {
            cin>>a[i];
        }

        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                sum=a[i]+a[i+1];
                a[i+1]=sum;
            }
            else
            {
                count++;
            }   
           
        }

        for(i=n-1;i>=0;i--)
        {
             if(a[i]!=a[i-1])
            {
                sum=a[i]+a[i-1];
                a[i-1]=sum;
            }
            else
            {
                ans++;
            }   
        }

        cout<<min(count,ans)<<endl;
    }


    return 0;
}

