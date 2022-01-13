#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout << "debug" << endl;

int main()
{
    ///"In the name of Allah,most gracious and most merciful"///

    ll i, j, x, y, z, count = 0, sum = 0, n, m;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    rep(i, n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    if (n & 1)
    {

        x = (n / 2) + 1;
        for (auto it : mp)
        {
            if (it.ss > (x))
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    else
    {
        x = n / 2;
        for (auto it : mp)
        {
            if (it.ss > (x))
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }

    return 0;
}
