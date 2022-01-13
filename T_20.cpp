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
     
        ll i,j,x,y,z,count=0,sum=0,ans=0,n;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            ans=max(ans,a[i]);
        }

        for(ll i=0;i<n;i++)
        {
            sum=a[i];
            for(ll j=i+1;j<n;j++)
            {
                sum=sum^a[j];
                count=max(count,sum);
            }
       }

       cout<<max(ans,count)<<endl;


    return 0;
}

