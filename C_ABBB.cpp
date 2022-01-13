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
    cin >> t;
    while (t--)
    {
        ll i, c = 0, s = 0;
        string n;
        cin >> n;

        stack<char> st;

        for (i = 0; i < n.size(); i++)
        {
            if (st.size() == 0)
                st.push(n[i]);
            else if (!st.empty() && st.top() == 'A' && n[i] == 'B')
                st.pop();
            else if (!st.empty() && st.top() == 'B' && n[i] == 'B')
                st.pop();
            else
            {
                st.push(n[i]);
            }
        }

        cout << st.size() << endl;
    }

    return 0;
}
