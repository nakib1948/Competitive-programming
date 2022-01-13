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
        ll i, j, x, y, z, count = 0, sum = 1, n, m;
        cin >> n;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        vector<ll> b, r;
        bool ok = true;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (a[i] < 1)
                {
                    ok = false;
                    break;
                }
                else
                    b.pb(a[i]);
            }
            else
            {
                if (a[i] > n)
                {
                    ok = false;
                    break;
                }
                else
                    r.pb(a[i]);
            }
        }
        if (!ok)
            cout << "NO" << endl;
        else
        {
            count = b.size() + 1;
            sort(b.begin(), b.end());
            sort(r.begin(), r.end());
            for (ll i = 0; i < b.size(); i++)
            {
                if (sum > b[i])
                {
                    ok = false;
                    break;
                }
                sum++;
            }
            for (ll i = 0; i < r.size(); i++)
            {
                if (count < r[i])
                {
                    ok = false;
                    break;
                }
                count++;
            }

            cout << (ok ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
