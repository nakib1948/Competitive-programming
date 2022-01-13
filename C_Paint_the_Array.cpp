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
ll mx = 100005;
vector<ll> v;
bool prime[100005];
void seive()
{

    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= mx; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p * p; i <= mx; i += p)
                prime[i] = false;
        }
    }

    for (ll p = 2; p <= mx; p++)
        if (prime[p])
            v.pb(p);
}
int main()
{
    ///"Bismillahir Rahmanir Raheem"///
    seive();
   
    Quicksilver;
    ll t;
    cin >> t;
    while (t--)
    {
        ll i, j, x, y, z, count = 0, sum = 0, n, m;
        cin >> n;
        ll a[n];
        set<ll>s;
        rep(i, n)
        {
            cin >> a[i];
            s.insert(a[i]);
            sum = max(sum, a[i]);
        }
        if (n%2==0)
        {
            for (ll i = 0; i < v.size(); i++)
            {
                if (v[i] > sum)
                    break;
                bool ok = true, ok1 = true;
                for (ll j = 0; j < n - 1; j += 2)
                {
                    if (a[j] % v[i] == 0 && a[j + 1] % v[i] != 0)
                       y=1;
                    else
                    {
                        ok = false;
                    }
                    if (a[j] % v[i] != 0 && a[j + 1] % v[i] == 0)
                        y=1;
                    else
                    {
                        ok1 = false;
                    }
                }
                if (ok)
                {
                    count = 1;
                    x = v[i];
                    break;
                }
                if (ok1)
                {
                    count = 1;
                    x = v[i];
                    break;
                }
            }
            if (count)
            {
                cout << x << endl;
            }
            else{
                
            for (auto it:s)
            {
                bool ok = true, ok1 = true;
                for (ll j = 0; j < n - 1; j += 2)
                {
                    if (a[j] % it == 0 && a[j + 1] % it != 0)
                       y=1;
                    else
                    {
                        ok = false;
                    }
                    if (a[j] % it != 0 && a[j + 1] % it == 0)
                        y=1;
                    else
                    {
                        ok1 = false;
                    }
                }
                if (ok)
                {
                    count = 1;
                    x = it;
                    break;
                }
                if (ok1)
                {
                    count = 1;
                    x = it;
                    break;
                }
            }
               if (count)
                {

                    cout << x << endl;
                }
                else
                    cout << 0 << endl;
        }
        }
    else
    {
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i] > sum)
                break;
            bool ok = true, ok1 = true;
            for (ll j = 0; j < n - 1; j += 2)
            {
                if (a[j] % v[i] == 0 && a[j + 1] % v[i] != 0)
                    y=1;
                else
                {
                    ok = false;
                }
                if (a[j] % v[i] != 0 && a[j + 1] % v[i] == 0)
                    y=1;
                else
                {
                    ok1 = false;
                }
            }
            if (ok)
            {
                if (a[n - 1] % v[i] == 0)
                {
                    count = 1;
                    x = v[i];
                    break;
                }
            }
            if (ok1)
            {
                if (a[n - 1] % v[i] != 0)
                {
                    count = 1;
                    x = v[i];
                    break;
                }
            }
        }
        if (count)
        {

            cout << x << endl;
        }
        else
            {
                  for (auto it:s)
                {
                    bool ok = true, ok1 = true;
                    for (ll j = 0; j < n - 1; j += 2)
                    {
                        if (a[j] % it == 0 && a[j + 1] % it != 0)
                        y=1;
                        else
                        {
                            ok = false;
                        }
                        if (a[j] % it != 0 && a[j + 1] % it == 0)
                            y=1;
                        else
                        {
                            ok1 = false;
                        }
                    }
                    if (ok)
                    {
                        if (a[n - 1] % it == 0)
                        {
                            count = 1;
                            x = it;
                            break;
                        }
                    }
                    if (ok1)
                    {
                        if (a[n - 1] % it != 0)
                        {
                            count = 1;
                            x = it;
                            break;
                        }
                    }
                }
                 if (count)
                {

                    cout << x << endl;
                }
                else
                    cout << 0 << endl;
            }
    }
}

return 0;
}
