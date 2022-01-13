#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
    ///"In the name of Allah,most gracious and most merciful"///

    ll t;
    cin >> t;
    while (t--)
    {
        ll m, i, j, x, y, z, count = 0, sum = 0, n;
        cin >> n >> m;
        bool ok = true;
        rep(i, n)
        {
            ll a, b, c, d;
            cin >> a >> b >> c >> d;
            if (b == c)
            { 
                ok = false;
            }
        }
        
        if ((m * m) % 4 == 0)
        {
            if (!ok)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
