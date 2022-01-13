#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=1e9,n,m;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            count=max(count,a[i]);
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]==count)
            continue;
            else
            {
                sum=min(sum,a[i]&count);
            }
            
        }
        cout<<sum<<endl;
    }


    return 0;
}

