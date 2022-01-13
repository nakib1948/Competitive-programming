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
        ll i,j,count=INT_MAX,sum=0,n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            count=min(count,a[i]);
            sum=max(sum,a[i]);
        }
        cout<<sum-count<<endl;
    }


    return 0;
}

