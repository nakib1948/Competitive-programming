#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
    ///"In the name of Allah,most gracious and most merciful"///

    ll t;
    cin >> t;
    while (t--)
    {
        ll i, j, x, y, z, count = 0, sum = 0, n;
        string s;
        vector<ll> v;
        cin >> n >> s;
        if (n % 2 == 1)
        {
            for (ll i = 0; i < s.size(); i+=2)
            {
                ll k = s[i] - '0';
                v.pb(k);
            }
            bool ok = true;
            for (ll i = 0; i < v.size(); i++)
            {
                if (v[i] % 2 == 1)
                {
                    ok = false;
                    break;
                }
            }
            if (!ok)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
        }
        else if (n % 2 == 0)
        {
            for (ll i = 1; i < s.size(); i+=2)
            {
                ll k = s[i] - '0';
                v.pb(k);
            }
            bool ok = true;
            for (ll i = 0; i < v.size(); i++)
            {
                if (v[i] % 2 == 0)
                {
                    ok = false;
                    break;
                }
            }
            if (!ok)
            {
                cout << "2" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }
    }

    return 0;
}
