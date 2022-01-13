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
    ll n;
    cin >> n;
    while (n != 0)
    {
        ll i, j, x, y, z, count = 0, sum = 0;
        vector<ll> v(n), v1;
        stack<ll> st;
        rep(i, n)
        {
            cin >> v[i];
        }
        for (ll i = 0; i < n; i++)
        {
            count = 0;
            st.push(v[i]);
            
            for (ll j = i + 1; j < n; j++)
            {
                if (v[j] < st.top())
                {
                    count = 1;
                    break;
                }
            }
            if (count == 0)
            { 
              st.pop();
            }
          if(count==0){
            while(1)
            {
                  count=0;
                for(ll j=i+2;j<n;j++)
                {
                    if(v[j]<st.top())
                    {
                        count=1;
                        break;
                    }
                }
                if(count==0)
                 st.pop();
                else
                {
                    break;
                }
                

            }
          }
           
        }
        bool ok = true;
        while (!st.empty())
        {
            ll k=st.top();
            v1.pb(k);
            st.pop();
        }
        for(ll i=0;i<v1.size()-1;i++)
        {
            if(v1[i+1]>v1[i])
              ok=true;
            else
            {
                ok=false;
                break;
            }
            
        }
        cout<<endl;

        if (ok)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        cin >> n;
    }

    return 0;
}
