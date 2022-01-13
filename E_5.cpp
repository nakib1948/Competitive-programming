#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mx 10000002

int a[mx], b[mx];
vector<int> v;
void solve()
{
    int n, m, i, j, k, x = 0, y, count = 0;
       memset(b,0,sizeof(b));

    for (i = 2; i < mx; i++)
    {
        a[i] = i;
    }

    for (i = 2; i < mx; i += 2)
    {
        a[i] = 2;
    }

    for (i = 3; i * i < mx; i += 2)
    {
        if (a[i] == i)
        {
            for (j = i * i; j < mx; j += i)
            {
                if (a[j] == j)
                {
                    a[j] = i;
                }
            }
        }
    }

    for (i = 2; i < mx; i++)
    {
        x = i;
        count = 0;
        while (x > 1)
        {
            count++;
            x /= a[x];
        }
        if (count == 1)
        {
            v.pb(i);
        }
    }
    for(auto x:v)
    {
        b[x]=x;
    }
}
int main()
{

    int n, k = 0;
    solve();
    while (scanf("%d", &n) != EOF)
    {
        if (n < 8)
            cout << "Impossible" << endl;
        else
        {

            int i = 0;
            bool ok = true;
            if (n % 2 == 0)
            {
                for (int i = 0; i < v.size(); i++)
                {
                    if (v[i] <= n - 4)
                    {
                        k = i;
                    }
                    else
                    {
                        break;
                    }
                }
                cout << 2 << " " << 2 << " ";
                for (int i = 0; i <= k; i++)
                {
                   int j=n-4-v[i];
                   if(b[j]!=0)
                   {
                       cout<<v[i]<<" "<<j<<endl;
                       ok=false;
                       break;
                   }
                }
                if(ok)
                cout<<"Impossible"<<endl;
            }
            else if (n % 2 == 1)
            {
                for (int i = 0; i < v.size(); i++)
                {
                    if (v[i] <= n-5)
                    {
                        k = i;
                    }
                    else
                    {
                        break;
                    }
                }
                cout << 2 << " " << 3 << " ";
                for (int i = 0; i <= k; i++)
                {
                   int j=n-5-v[i];
                   if(b[j]!=0)
                   {
                       cout<<v[i]<<" "<<j<<endl;
                       ok=false;
                       break;
                   }
                }
                if(ok)
                cout<<"Impossible"<<endl;
            }
        }
    }
    return 0;
}
