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
ll visit[1005], parent[1005], ans = 0;
vector<ll> v[1005];
void dfs(ll node)
{
    visit[node] = 1;
    for (auto it : v[node])
    {
        if (visit[it] == 0)
        {
            dfs(it);
        }
        else
        {
            cout<<it<<" ";
          
        }
    }
}
int main()
{
    ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;

    ll i, j, x, y, z, count = 0, sum = 0, n, m;
    cin >> n;
    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
        v[i + 1].pb(a[i]);
    }
    for (ll i = 1; i <= n; i++)
    {
        dfs(i);
       
        for (ll i = 0; i < 1005; i++)
        {
            visit[i] = 0;
            parent[i] = 0;
            
        }
    }
    cout << "\n";

    return 0;
}