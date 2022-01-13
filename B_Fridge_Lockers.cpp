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
        cin >> n >> m;
        ll a[n];
        vector<pair<ll, ll>> v, v1;
        rep(i, n)
        {
            cin >> a[i];
            v.pb(mp(a[i], i + 1));
        }
        if (n == 2)
            cout << -1 << endl;
        else
        {
            if (m < n)
                cout << -1 << endl;
            else
            {
                sort(v.begin(), v.end());
                for (ll i = 0; i < v.size() - 1; i++)
                {
                    sum += v[i].ff + v[i + 1].ff;
                    v1.pb(mp(v[i].ss, v[i + 1].ss));
                    m--;
                }
                m--;
                sum += v[0].ff + v[v.size() - 1].ff;
                v1.pb(mp(v[v.size() - 1].ss, v[0].ss));
                while (m--)
                {
                    sum += v[0].ff + v[1].ff;
                    v1.pb(mp(v[0].ss, v[1].ss));
                }
                cout << sum << endl;
                for (auto it : v1)
                    cout << it.ff << " " << it.ss << endl;
            }
        }
    }

    return 0;
}
