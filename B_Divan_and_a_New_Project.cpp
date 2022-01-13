#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define debug cout << "debug" << endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin >> t;
    while (t--)
    {
        ll i, j, x, y, z, count = 0, sum = 0, n, m;
        cin >> n;
        ll a[n], b[n];
        memset(b, 0, sizeof(b));
        vector<pair<ll, ll>> v;
        vector<ll> v1, v2, v3;
        rep(i, n)
        {
            cin >> a[i];
            v.pb(mp(a[i], i));
        }
        sort(v.rbegin(), v.rend());
        sort(a, a + n, greater<ll>());
        if (n & 1)
        {
            for (ll i = 1; i <= (n / 2); i++)
            {
                v1.pb(2 * i);
                v1.pb(2 * i);
            }
            v1.pb(2 * ((n / 2) + 1));
            sort(v1.begin(), v1.end());
            for (ll i = 0; i < n; i++)
            {
                sum += (v1[i] * a[i]);
            }
            cout << sum << "\n";
            ll j = 2;
            for (ll i = (n / 2); i > 0; i--)
            {
                v2.pb(i);
                v2.pb((n / 2) + j);
                j++;
            }
            v2.pb((n / 2) + j);
            for (ll i = 0; i < v2.size(); i++)
            {
                b[v[i].ss] = v2[i];
            }
            cout << (n / 2) + 1 << " ";
            for (ll i = 0; i < n; i++)
                cout << b[i] << " ";
            cout << "\n";
        }
        else
        {
            for (ll i = 1; i <= (n / 2); i++)
            {
                v1.pb(2 * i);
                v1.pb(2 * i);
            }
            sort(v1.begin(), v1.end());
            for (ll i = 0; i < n; i++)
            {
                sum += (v1[i] * a[i]);
            }
            cout << sum << "\n";
            ll j = 2;
            for (ll i = (n / 2); i > 0; i--)
            {
                v2.pb(i);
                v2.pb((n / 2) + j);
                j++;
            }
            for (ll i = 0; i < v2.size(); i++)
            {
                b[v[i].ss] = v2[i];
            }
            cout << (n / 2) + 1 << " ";
            for (ll i = 0; i < n; i++)
                cout << b[i] << " ";
            cout << "\n";
        }
    }

    return 0;
}
