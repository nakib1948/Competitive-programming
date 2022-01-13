#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,y,z,sum=0,n,m;
        cin>>n>>m;
        string s1;
        vector<string>v;
        for(i=0;i<n-1;i++)
        {
            string s;
            cin>>s;
            v.pb(s);

        }
        cin>>s1;
        for(i=0;i<n-1;i++)
        {
            string w=v[i] ;
            ll x=w.size();
            if(w[x-1]=='R')
             sum++;
        }
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]=='D')
              sum++;
        }
        cout<<sum<<endl;
    }


    return 0;
}
