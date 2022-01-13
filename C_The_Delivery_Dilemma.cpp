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
    cin >> t;
    while (t--)
    {
        ll i, j=0, x=0, y=0, z=0, count = 0, sum = 0, n;
        vector<pair<ll, ll> > v;
        cin >> n;
        ll a[n], b[n];
        rep(i, n) { cin >> a[i]; }
        rep(i, n)
        {cin >> b[i];sum+=b[i]; }
        y=sum;
       
        rep(i, n) { v.pb(mp(a[i], b[i])); }

        sort(v.begin(), v.end());
       
        count=v[0].ff;
        for(ll i=0;i<v.size()-1;i++)
        {
            if(j==0)
            {
                count=v[i].ss;
                sum-=count;
                x=max(v[i].ff,sum);
                y=min(y,x);

            }
            else 
            {
                j=1;
                count+=v[i].ss;
                sum-=count;
                x=max(v[i].ff,sum);
                y=min(y,x);
            }
        }
        cout << min(y,v[v.size()-1].ff) << endl;
    }

    return 0;
}
