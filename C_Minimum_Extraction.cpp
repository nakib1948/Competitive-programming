#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define debug cout << "debug" << endl;
#define Quicksilver ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

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
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (n < 2)
            cout << a[0] << endl;
        else
        {
            a[n - 1] -= a[0];
            sum = a[0];
            count = a[0];
            for (ll i = 1; i < n - 1; i++)
            {
                a[i] -= sum;
                count = max(count, a[i]);
                a[n - 1] -= a[i];
                sum += a[i];
            }
            cout << max(count, a[n - 1]) << endl;
        }
    }

    return 0;
}
