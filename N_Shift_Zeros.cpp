#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
    ll n,i,sum=0,count=0;
    cin>>n;
    ll a[n];
    rep(i,n)
    {
        cin>>a[i];
    }
    rep(i,n)
    {
        for(ll j=0;j<n-1;j++)
        {
            if(a[j]==0)
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    rep(i,n)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
