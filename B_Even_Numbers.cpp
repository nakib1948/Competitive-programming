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
    ll i, j, x, y, z, count = 0, sum = 0, n;
    cin >> n;
    if (n == 1)
        cout << "-1" << endl;
    else
    {
        if (n & 1 == 1)
        {
            for (i = 2; i < n; i += 2)
            {
                cout << i << endl;
            }
        }
        else
        {
            for (i = 2; i <= n; i += 2)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}
