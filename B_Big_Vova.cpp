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
        ll i, j, x, y, z, count = 1, sum = 0, n;
        cin >> n;
        ll a[n], b[n];
        vector<ll> v, v1;

        rep(i, n)
        {
            cin >> a[i];
          //  b[i] = a[i];
          //  sum = max(sum, a[i]);
        }
       /* rep(i, n)
        {
            if (sum == a[i])
            {
                a[i] = -1;
                break;
            }
        }*/
      //  sort(b, b + n, greater<ll>());

        ll k = 0;
       // v.pb(k);
        y=n;
        for (ll i = 0; i < n; i++)
        {
                   vector< pair<ll, ll> >v2;
                    for (ll j = 0; j < n; j++)
                    {
                        if(a[j]!=-1)
                        {
                            v2.pb(mp(__gcd(k,a[j]),j));
                        }
                       
                    }
                    sort(v2.begin(),v2.end());
                    reverse(v2.begin(),v2.end());
                    ll s=v2[0].ss;
                    k = v2[0].ff;
                    v.pb(a[s]);
                    a[s] = -1;

        }
        for(auto x:v)
        {
            cout<<x<<" ";
        }
       
        cout << endl;
    }

    return 0;
}
