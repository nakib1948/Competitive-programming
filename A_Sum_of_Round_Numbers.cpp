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
        ll i,j,x,y,z,count=0,sum=0,n;
        string s;
        vector<string>v;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]!='0')
            {
                string w=s.substr(i,1);
                for(ll j=0;j<(s.size()-1-i);j++)
                {
                    w+='0';
                }
                v.pb(w);
            }
        }
        cout<<v.size()<<endl;
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }


    return 0;
}

