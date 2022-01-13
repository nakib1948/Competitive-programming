#include <bits/stdc++.h>
using namespace std;

#define bss                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long

ll gcd(ll a, ll b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

ll lcm(ll a, ll b)
{
    return (a * (b / gcd(a, b)));
}

int main()
{

    bss;
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll i, c = 0, s = 0, n;
        scanf("%lld", &n);
        ll a[n],b[n];
        for (i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            b[i]=a[i];
        }
        sort(b,b+n);
        for (ll i = 0; i < n - 1; i++)
        {
            for (ll j = 0; j < n - i - 1; j++){
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    s++;
                }

            }

        }
      ll  v=((n*(n-1))/2)-1;
        if (s > v)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}
