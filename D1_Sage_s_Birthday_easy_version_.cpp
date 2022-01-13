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

    ll i, j, x, y, z, count = 0, sum = 0, n;
    cin >> n;
    vector<ll> v, v1;
    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (ll i = 0; i < n; i += 2)
    {
        v.pb(a[i]);
    }
    for (ll j = 1; j < n; j += 2)
    {
        v1.pb(a[j]);
    }
    if (n % 2 == 1)
    {
        cout << v1.size() << endl;
        auto it1 = v.begin();
        auto it = v1.begin();
        for (ll i = 0; i < n - 1; i++)
        {
            if (i % 2 == 0)
            {
                cout << *it << " ";
                it++;
            }
            else if (i % 2 == 1)
            {
                cout << *it1 << " ";
                it1++;
            }
        }
        cout << v[v.size() - 1] << endl;
    }
    else
    {
        cout << v1.size() - 1 << endl;
        auto it1 = v.begin();
        auto it = v1.begin();
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << *it << " ";
                it++;
            }
            else if (i % 2 == 1)
            {
                cout << *it1 << " ";
                it1++;
            }
        }
    }

    return 0;
}
