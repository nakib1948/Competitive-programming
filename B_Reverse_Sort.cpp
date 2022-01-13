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
        ll i, j, x = 0, y, z, count = 0, sum = 0, n, m;
        cin >> n;
        string s, w;
        cin >> s;
        w = s;
        sort(w.begin(), w.end());
        if (w == s)
            cout << 0 << endl;
        else
        {
            vector<ll> v, v1;
            for (ll i = 0; i < s.size(); i++)
            {
                if (s[i] == '1')
                {
                    count++;
                    v1.pb(i + 1);
                }
            }
            for (ll i = s.size() - 1; i >= 0; i--)
            {
                if (v1.size() == 0)
                    break;
                else
                {
                    if (s[i] == '0')
                    {
                        v.pb(i + 1);
                        auto it = v1.begin();
                        v.pb(*it);
                        v1.erase(it);
                    }
                    else if (s[i] == '1')
                    {
                        auto it = v1.end();
                        it--;
                        v1.erase(it);
                    }
                }
            }
            sort(v.begin(), v.end());
            cout << 1 << endl;
            cout << v.size() << " ";
            for (auto it : v)
                cout << it << " ";
            cout << endl;
        }
    }

    return 0;
}
