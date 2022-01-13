#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
    ll t;
    cin>>t;
    for(ll l=1;l<=t;l++)
    {
        ll count=0,sum=0,n,m;
        cin>>n>>m;
        cin.ignore();
        vector<string>s1,s2;
        set<string>se;
        for(ll i=0;i<n;i++)
        {
            string s;
            getline(cin,s);
            s1.pb(s);
        }
        for(ll i=0;i<m;i++)
        {
            string s;
            getline(cin,s);
           s2.pb(s);
        }

        for(ll i=0;i<s1.size();i++)
        {
            string q=s1[i];
            for(ll j=0;j<s2.size();j++)
            {
                string w=q+s2[j];
                se.insert(w);
            }
        }
        cout<<"Case "<<l<<": "<<se.size()<<endl;
        
    }


    return 0;
}

