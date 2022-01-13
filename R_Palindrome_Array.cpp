#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

ll palindrome(ll b[], ll start, ll end) 
{ 
    if (start >= end) { 
        return 1; 
    } 
    if (b[start] == b[end]) { 
        return palindrome(b, start + 1, end - 1); 
    } 
    else { 
        return 0; 
    } 
} 

int main()
{
        ll i, j, x, y, z, count = 0, sum = 0, n;
        cin >> n;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
        }

        if (palindrome(a, 0, n - 1) == 1)
            cout << "YES";
        else
            cout << "NO";

    return 0;
}
