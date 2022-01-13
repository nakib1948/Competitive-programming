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
        if (n & 1)
        {
            x = m % 4;
            if (x == 0)
                cout << n << endl;
            else if (x == 1)
            {
                m += 3;
                n -= m;
                n += (m - 1);
                n += (m - 2);
                cout << n << endl;
            }
            else if (x == 2)
            {
                m += 2;
                n -= m;
                n += (m - 1);
                cout << n << endl;
            }
            else
            {
                m += 1;
                n -= m;
                cout << n << endl;
            }
        }
        else
        {
            x = m % 4;
            if (x == 0)
                cout << n << endl;
            else if (x == 1)
            {
                m += 3;
                n += m;
                n -= (m - 1);
                n -= (m - 2);
                cout << n << endl;
            }
            else if (x == 2)
            {
                m += 2;
                n += m;
                n -= (m - 1);
                cout << n << endl;
            }
            else
            {
                m += 1;
                n += m;
                cout << n << endl;
            }
        }
    }

    return 0;
}
