#include<bits/stdc++.h>
using namespace std; 

#define koala ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    koala;
    ll t;
    cin>>t;
    while(t--)
    {
        
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        vector<string>v;
        map<char,ll>m;
        rep(i,n)
        {
            string s;
            cin>>s;
            v.pb(s);
        }
        for(ll i=0;i<v.size();i++)
        {
            string w=v[i];
            for(ll j=0;j<w.size();j++)
            {
                m[w[j]]++;
            }
        }
        bool ok=true;
        for(auto k:m)
        {
            if(k.second%n==0)
            {
                ok=true;
            }
            else
            {
                ok=false;
                break;
            }
            
        }
        if(ok)
         cout<<"YES"<<endl;
         else
         {
             cout<<"NO"<<endl;
         }
         
    }


    return 0;
}

