#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define mq make_pair
#define ff first
#define ss second

int main()
{
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll i, c = 10000000000000, s = 0, n, s1 = 0, s2 = 0, l, l1, l2, l3;
        ll k = 0, k1 = 0, k2 = 0;
        scanf("%lld", &n);
        map<ll, ll> mp;
        vector<pair<ll, ll>> v;
        vector<ll> v1;
        ll a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            mp[a[i]]++;
        }
        if (a[0] == a[n - 1])
        {
            k = 1;
            for (ll i = 0; i < n - 1; i++)
            {
                if (a[i] == a[0] && a[i + 1] == a[0])
                    s++;
            }
            l = mp[a[0]] - 1 - s;
        }
        else
        {
            if (mp[a[0]] == 1)
            {
                k1 = 1;
                l1 = 1;
            }
            else
            {
                k1 = 1;
                for (ll i = 0; i < n - 1; i++)
                {
                    if (a[i] == a[0] && a[i + 1] == a[0])
                        s1++;
                }
                l1 = mp[a[0]] - s1;
            }
           
            if (mp[a[n - 1]] == 1)
            {
                k2 = 1;
                l2 = 1;
            }
            else
            {
                k2 = 1;
                for (ll i = 0; i < n - 1; i++)
                {
                    if (a[i] == a[n - 1] && a[i + 1] == a[n - 1])
                        s2++;
                }

                l2 = mp[a[n - 1]] - s2;
            }
        }

        if (k == 1)
        {
            v1.pb(l), k = 0;
        }
         if (k1 == 1)
            {
                v1.pb(l1), k1 = 0;
            }
        if (k2 == 1)
        {
            v1.pb(l2), k2 = 0;
        }
        for (auto it : mp)
        {
            v.pb(mq(it.ss, it.ff));
        }
        sort(v.begin(), v.end());
        if (v[0].ss == a[0] && v[0].ss == a[n - 1])
        {
            c = 1;
        }
        else if (v[0].ss == a[0])
        {
            c = 2;
        }
        else if (v[0].ss == a[n - 1])
        {
            c = 3;
        }
        else
        {
            k = 1;
            ll x = 0;
            for (ll i = 0; i < n - 1; i++)
            {
                if (a[i] == v[0].ss && a[i + 1] == v[0].ss)
                {
                    x++;
                }
            }
            l3 = v[0].ff + 1 - x;
        }
        if (k == 1)
        {
            v1.pb(l3), k = 0;
        }
        sort(v1.begin(), v1.end());
        cout << v1[0] << endl;
    }
    return 0;
}
