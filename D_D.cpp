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
    ll i, j, x, y, z, count = 0, sum = 0, n;
    cin>>n;
    ll a[n];
    rep(i,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for (ll i=0;i<n-2;i++)
    {
        if((a[i]+a[i+1])>a[i+2])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
        cout<<"NO"<<endl;

    return 0;
}
