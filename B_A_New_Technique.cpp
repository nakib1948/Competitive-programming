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

    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll i, c = 0, s = 0, n, m;
        scanf("%lld %lld", &n, &m);
        vector<ll> v;

        ll a[n][m], b[m][n];
        rep(i, n)
        {
            for (ll j = 0; j < m; j++)
                scanf("%lld", &a[i][j]);
        }

        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
                scanf("%lld", &b[i][j]);
        }
        for (ll i = 0; i < m; i++)
        {
            for(ll l=0;l<n;l++)
            {
            for (ll j = 0; j < n; j++)
            {
               if(b[i][l]==a[j][0])
               {
                       for(ll k=0;k<m;k++)
                       {
                           cout<<a[j][k]<<" ";
                       }
                   cout<<endl;
               }
            }
            }
        }
    }

    return 0;
}
