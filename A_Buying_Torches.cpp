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
        ll i, j, x, y, z, count = 0, sum = 0, n, k;
        cin >> x >> y >> k;
        sum = (y * k) + k - 1;
        count = sum / (x - 1);
        /*   for (ll i = 0;; i++)
        {
            if (((count * x)-count) < sum)
                count++;
            else
            {
                break;
            }

           
        }*/
        if ((count * (x - 1) < sum))
            count++;
        cout << count + k << endl;
    }

    return 0;
}
