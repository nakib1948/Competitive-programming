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
        vector<ll> v, v1;
        if(n<4)
        cout<< "-1" <<endl;
        else if(n==4)
        {
            cout<<"3 1 4 2"<<endl;
        }
        else if(n==5)
        {
           cout<<"1 3 5 2 4"<<endl;
        }
      
        else if((n%2)==1)
        {
        for (ll i = 1; i <= n; i += 2)
        {
            v1.pb(i);
        }
        for(ll i=2;i<=n;i+=2)
        {
            v.pb(i);
        }

        reverse(v.begin(),v.end());
        if((v1[v1.size()-1]-v[0])<2)
        {
             x=v[0],y=v[1],z=v[2];
             v[0]=z,v[1]=x,v[2]=y;
             ll x1=v1[v1.size()-1],x2=v1[v1.size()-2];
             v1[v1.size()-1]=x2,v1[v1.size()-2]=x1;
        }

        for(auto it:v1)
        cout<<it<<" ";
        for(auto it:v)
         cout<<it<<" ";
         cout<<endl;
        }
    else if((n%2)==0)
    {
         for (ll i = 1; i <= n; i += 2)
        {
            v1.pb(i);
        }
        for(ll i=2;i<=n;i+=2)
        {
            v.pb(i);
        }

        reverse(v.begin(),v.end());
        if((v1[v1.size()-1]-v[0])<2)
        {
             ll x1=v1[v1.size()-1],x2=v1[v1.size()-2];
             v1[v1.size()-1]=x2,v1[v1.size()-2]=x1;
        }
        for(auto it:v1)
        cout<<it<<" ";
        for(auto it:v)
         cout<<it<<" ";
         cout<<endl;
        
    }

}
    return 0;
}
