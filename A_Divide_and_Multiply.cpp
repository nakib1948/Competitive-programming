#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define debug cout << "debug" << endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}

int main()
{
    ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin >> t;
    while (t--)
    {
        ll i, j, x, y, z, count=0, n, m, sum = 0;
        vector<ll> v, v1;
        cin >> n;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
         
        }
        if(n==1)
        cout<<a[0]<<endl;
        else 
        {
            for(ll i=0;i<n;i++)
            {
                while(a[i]%2!=1)
                {
                    count++;
                    a[i]/=2;
                }
            }
            sort(a,a+n);
            for(ll i=0;i<n-1;i++)
            {
                sum+=a[i];
            }
            cout<<sum+(Pow(2,count)*a[n-1])<<endl;
        }
    }

    return 0;
}
