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
    ll i, j, x, y, z, count = 0, sum = 0, n;
    string s;
    getline(cin, s);
    vector<string> v;
    vector<char> v1;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            string w = s.substr(0, i + 1);
            s.erase(0, i + 1);
            i = 0;
            v.pb(w);
        }
    }
    for (auto x : v)
        cout << x << endl;
 
    for (ll i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
            break;
        else
        {
            v1.pb(s[i]);
        }
    }
    reverse(v1.begin(), v1.end());
    for (auto c : v1)
        cout << c;
    cout << endl;
 
    return 0;
}