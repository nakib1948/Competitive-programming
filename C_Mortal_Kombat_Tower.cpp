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

    ll t;
    cin >> t;
    while (t--)
    {
        ll i, j, x, y, z, count = 0, sum = 0, n;
        cin >> n;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
        }

        if (n == 1)
        {
            if (a[0] == 1)
                cout << "1" << endl;
            else
            {
                cout << "0" << endl;
            }
        }
        else
        {
            if (a[1] == 1)
            {
                for (ll i = 1; i < n - 1; i++)
                {
                    if (a[i] == 0 && a[i + 1] == 0)
                    {
                        i++;
                    }
                    else if (a[i] == 0 && a[i + 1] == 1)
                    {
                        if(a[i+2]==1&&a[i+3]==0)
                        {
                            i+=3;
                            count++;
                        }
                        else if(a[i+2]==0&&a[i+3]==1)
                        {
                            i+=2;
                        }
                    }
                    else if (a[i] == 1 && a[i + 1] == 0)
                    {
                        i++;
                    }
                    else if (a[i] == 1 && a[i + 1] == 1)
                    {
                       if(a[i+2]==1&&a[i+3]==0)
                        {
                            i+=3;
                            count++;
                        }
                        else if(a[i+2]==0&&a[i+3]==1)
                        {
                            i+=2;
                        }
                    }
                }
                cout << count << endl;
            }
            else if (a[1] == 0)
            {
                for (ll i = 2; i < n - 1; i++)
                {
                    if (a[i] == 0 && a[i + 1] == 0)
                    {
                        i++;
                    }
                    else if (a[i] == 0 && a[i + 1] == 1)
                    {
                        if(a[i+2]==1&&a[i+3]==0)
                        {
                            i+=3;
                            count++;
                        }
                        else if(a[i+2]==0&&a[i+3]==1)
                        {
                            i+=2;
                        }
                    }
                    else if (a[i] == 1 && a[i + 1] == 0)
                    {
                        i++;
                    }
                    else if (a[i] == 1 && a[i + 1] == 1)
                    {
                       if(a[i+2]==1&&a[i+3]==0)
                        {
                            i+=3;
                            count++;
                        }
                        else if(a[i+2]==0&&a[i+3]==1)
                        {
                            i+=2;
                        }
                    }
                }
                cout << count << endl;
            }
        }
    }

    return 0;
}
