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
    ll i, j, x1, y1, z, count = 0, sum = 0, n;
    cin >> x1 >> y1 >> z;

    ll x=min(x1,y1);
    ll y=max(x1,y1);
    if(z==1)
    {
        ll sum=(y*(y+1))/2;
        ll sum1=((x-1)*x)/2;
        cout<<sum-sum1<<endl;
    }
    else if (z > x)
    {
       ll sum=(z*(y+1))/2;
        ll sum1=((x-1)*x)/2;
        cout<<sum-sum1<<endl;
    }
    else
    {
        for (ll i = x + (x % z); i <= y; i += z)
        {
            sum += i;
        }
        cout << sum << endl;
    }

    return 0;
}
