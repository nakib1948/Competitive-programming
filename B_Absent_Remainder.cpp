#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mq make_pair
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
        map<ll, ll> mp;
        vector<pair<ll, ll> > v1;
        vector<ll> v;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
            mp[a[i]] = 1;
        }
        for (auto it : mp)
        {
            v.pb(it.ff);
        }

        for (ll i = 0; i < v.size(); i++)
        {
            for (ll j = i + 1; j < v.size(); j++)
            {
                if (mp[v[i] % v[j]] ==0)
                {
                    v1.pb(mq(v[i], v[j]));
                    count++;
                }
                else if (mp[v[j] % v[i]] ==0)
                {
                    v1.pb(mq(v[j], v[i]));
                    count++;
                }

                if (count == n / 2)
                    break;
            }
            if (count == n / 2)
                break;
        }
        for (auto it : v1)
            cout << it.ff << " " << it.ss << endl;
    
}

return 0;
}
