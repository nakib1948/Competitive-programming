#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define debug cout << "debug" << endl;
#define Quicksilver              \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main()
{
    ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin >> t;
    while (t--)
    {
        ll i, j, x, y, z, count = 0, sum = 0, n, m;
        string s;
        cin >> s;

        bool ok = false;
        for (ll i = s.size() - 1; i > 0; i--)
        {
            ll k = s[i] - '0', k1 = s[i - 1] - '0';
            k += k1;
            if (k >= 10)
            {
                string w = to_string(k);
                s[i] = w[1];
                s[i - 1] = w[0];

                ok = true;
                break;
            }
        }
        if (ok)
            cout << s << endl;
        else
        {

            if (s.size() == 1)
                cout << s << endl;
            else
            {
                ll k = s[0] - '0', k1 = s[1] - '0';
                string w = to_string(k + k1);
                s.erase(0, 1);
                s[0] = w[0];
                cout << s << endl;
            }
        }
    }

    return 0;
}
