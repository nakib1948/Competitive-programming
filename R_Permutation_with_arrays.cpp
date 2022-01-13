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

    ll n, count = 0,i;
    cin >> n;
    ll v1[n], v2[n];
    rep(i, n)
    {
        cin >> v1[i];
    }
    rep(i, n)
    {
        cin >> v2[i];
    }
    sort(v1, v1 + n);

    sort(v2, v2 + n);
    rep(i, n)
    {

        if (v1[i] == v2[i])
            count++;
        else
            count = 0;
    }

    if (count == n)

    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}
