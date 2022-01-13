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
    string s;
    while(cin>>s)
    {
        vector<pair<ll,ll> >v;
        map<char,ll>m;
        for(ll i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(auto it:m)
        {
            v.pb(mp(it.ss,-(int(it.ff))));
        }
        sort(v.begin(),v.end());
        for(auto it:v)
        {
            cout<<-it.ss<<" "<<it.ff<<endl;
        }
       
        cout<<endl;
    }


    return 0;
}

