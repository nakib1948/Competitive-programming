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
    ///"In the name of Allah,most gracious and most merciful"///
    while(1)
    {
    ll i, j, x, y, z, count = 0, sum = 0, n, m;
    cin >> n >> m;
    if (n == 0 && m == 0)
    {
        return 0;
    }
    map<ll, ll> mp;
    rep(i, n)
    {
        ll k;
        cin >> k;
        mp[k]++;
    }
    for (ll i = 0; i < m; i++)
    {
        ll k;
        cin >> k;
        mp[k]++;
    }

    for (auto x : mp)
    {
        if (x.ss > 1)
            count++;
    }
    cout << count << endl;
    }
    return 0;
}
