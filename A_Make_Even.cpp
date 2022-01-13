#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll c = 0, sum = 0, n, m;
        string s;
        cin >> s;
        ll x = s[s.size() - 1] - '0';
        if (x & 1)
        {
            for (ll i = 0; i < s.size(); i++)
            {
                if (((s[i] - '0') & 1) == 0)
                    c++;
            }
            if (((s[0] - '0') & 1) == 0)
                cout << 1 << endl;
            else if (c == 0)
                cout << -1 << endl;
            else
                cout << 2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
