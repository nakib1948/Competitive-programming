#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll i, c = 0, s = 0, n, f = 0, k,c1=100000000000,ans;
        scanf("%lld %lld", &n, &k);
        ll a[n], b[104];
        memset(a,0,sizeof(a));
        for (i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            b[a[i]]=1;
        }

        for (ll c=1;c<=100;c++)
        {
             if(b[c]==1)
             {
                 s=0;
            for (ll i = 0; i < n; )
            {
                if (a[i] != c)
                {
                    s++;
                    i+=k;
                }
                else i++;
             
            }
              c1=min(c1,s);
             }
        
        }
        cout << c1 << endl;
    }

    return 0;
}
