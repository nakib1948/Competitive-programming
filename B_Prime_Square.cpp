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
        ll a[n][n];

        for (ll i = 0; i < n ; i++)
        {

            for (ll j = 0; j < n ; j++)
            {
              if(i==j)
               {
                   a[i][j]=1;
                  
               }
               else if(j==(n-1-i))
                a[i][j]=1;
               else 
               a[i][j]=0;
            }
            
        }

        if(n%2==1)
        {
            a[n/2][(n/2)+1]=1;
            a[(n/2)-1][n/2]=1;
        }
      
        for (ll i = 0; i < n ; i++)
        {

            for (ll j = 0; j < n ; j++)
            {
             cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
      
    }

    return 0;
}
