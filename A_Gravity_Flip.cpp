#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)

int main()
{
    ll i, j, x, y, z, count = 0, sum = 0, n;
    cin >> n;
    ll a[n];
    rep(i,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    rep(i,n)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
