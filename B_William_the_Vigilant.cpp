#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define debug cout << "debug" << endl;
#define Quicksilver ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;

    ll i, j, x, y, z, count = 0, sum = 0, n, m;
    cin >> n >> m;

    string s, w = "abc";
    cin >> s;
    for (ll i = 0; i + 3 <= s.size(); i++)
    {
        string r = s.substr(i, 3);
        if (r == w)
            count++;
    }

    while (m--)
    {
        ll i;
        char ch;
        cin >> i >> ch;
        i--;
        if (i < n - 2 && s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
            count--;
        if (i < n - 1 && i > 0 && s[i - 1] == 'a' && s[i] == 'b' && s[i + 1] == 'c')
            count--;
        if (i >= 2 && s[i - 2] == 'a' && s[i - 1] == 'b' && s[i] == 'c')
            count--;

        s[i] = ch;
        if (i < n - 2 && s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
            count++;
        if (i < n - 1 && i > 0 && s[i - 1] == 'a' && s[i] == 'b' && s[i + 1] == 'c')
            count++;
        if (i >= 2 && s[i - 2] == 'a' && s[i - 1] == 'b' && s[i] == 'c')
            count++;
        cout << count << endl;
    }

    return 0;
}
