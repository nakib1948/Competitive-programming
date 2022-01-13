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
    ///"In the name of Allah,most gracious and most merciful"///

    ll i, j, x, y, z, count = 0, sum = 0, n;
    cin >> n >> z;

    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    if(z==0)
    {
       cout<<a[0]<<endl;
        
    }
    else{
        sort(a, a + n);
        bool ok = true;
        x=a[z-1];
        
        for (ll i = z; i < n; i++)
        {
            if (a[i] == x)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << x << endl;
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
