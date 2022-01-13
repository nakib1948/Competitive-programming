#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout << "debug" << endl;
#define kk  ios::sync_with_stdio(false); cin.tie(0);
ll Pow(ll x, ll y){return y == 0 ?: x * pow(x, y - 1);}
ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return (a * (b / gcd(a, b))); }

int main()
{
    ///"In the name of Allah,most gracious and most merciful"///
    kk;
    ll t;
    cin >> t;
    while (t--)
    {
        ll i, j, x, y, z, count = 0, sum = 0, n;
        string s1, w1, s, w;
        cin >> s1 >> w1;
        if (s1.size() == w1.size())
        {
            if (s1 == w1)
                cout << s1 << endl;
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if (s1.size() >= w1.size())
            {
                s = s1;
                w = w1;
            }
            else
            {
                s = w1;
                w = s1;
            }

             for (ll i = 0; (i + w.size()) <= s.size(); i += w.size())
            {
                string q = s.substr(i, w.size());
                if (q == w)
                {
                    count++;
                }
            }
            if ((count * w.size()) == s.size())
            {
                cout << s << endl;
            }
            else
            {
                count = 0;
                string q = s;
                string p=w;
                ll k=lcm(s.size(),w.size());
                ll k1=k/s.size();
                ll k3=k/w.size();
                for (ll i = 2; i <= k1; i++)
                {
                    s += q;
                }
                for(ll i=2;i<=k3;i++)
                {
                    w+=p;
                }

                if (s==w)
                {
                    cout << s << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
    }

    return 0;
}
