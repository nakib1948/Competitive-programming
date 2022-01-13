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
    ll i, j;
    string s, s1 = "username", s2 = "pwd", s3 = "profile", s4 = "role", s5 = "key";
    cin >> s;

    for (ll i = 0; i < s.size(); i++)
    {
        string w = s.substr(i, 8);
        if (w == s1)
        {
            cout << "username: ";
            for (ll j = i + 9; j < s.size(); j++)
            {
                if ((s[j] >= 'a' && s[j] <= 'b') || (s[j] >= 'A' && s[j] <= 'B'))
                {
                    cout << s[j];
                }
                else
                {
                    break;
                }
            }
            cout << endl;
        }
    }
    for (ll i = 0; i < s.size(); i++)
    {
        string q = s.substr(i, 3);
        if (q == s2)
        {
            cout << "pwd: ";
            for (ll j = i + 4; j < s.size(); j++)
            {
                if ((s[j] >= 'a' && s[j] <= 'b') || (s[j] >= 'A' && s[j] <= 'B'))
                {
                    cout << s[j];
                }
                else
                {
                    break;
                }
            }
            cout << endl;
        }
    }
    for (ll i = 0; i < s.size(); i++)
    {
        string r = s.substr(i, 7);
        if (r == s3)
        {
            cout << "profile: ";
            for (ll j = i + 8; j < s.size(); j++)
            {
                if ((s[j] >= 'a' && s[j] <= 'b') || (s[j] >= 'A' && s[j] <= 'B'))
                {
                    cout << s[j];
                }
                else
                {
                    break;
                }
            }
            cout << endl;
        }
    }
    for (ll i = 0; i < s.size(); i++)
    {
        string u = s.substr(i, 4);
        if (u == s4)
        {
            cout << "role: ";
            for (ll j = i + 5; j < s.size(); j++)
            {
                if ((s[j] >= 'a' && s[j] <= 'b') || (s[j] >= 'A' && s[j] <= 'B'))
                {
                    cout << s[j];
                }
                else
                {
                    break;
                }
            }
            cout << endl;
        }
    }
    for (ll i = 0; i < s.size(); i++)
    {
        string y = s.substr(i, 3);

        if (y == s5)
        {
            cout << "key: ";
            for (ll j = i + 4; j < s.size(); j++)
            {
                if ((s[j] >= 'a' && s[j] <= 'b') || (s[j] >= 'A' && s[j] <= 'B'))
                {
                    cout << s[j];
                }
                else
                {
                    break;
                }
            }
            cout << endl;
        }
    }

    return 0;
}
