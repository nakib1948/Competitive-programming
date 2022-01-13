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
     
        ll i,j,x,y,z,count=0,sum=0,n;
        vector<pair<ll,string> >v;
        cin>>n;
        string s;
        cin>>s;
        set<string>se;
        for(ll i=0;i<s.size()-1;i++)
        {
           string w=s.substr(i,2);
           se.insert(w);
        }
        for(auto x:se)
        {
            count=0;
            for(ll i=0;i<s.size()-1;i++)
            {
                string w=s.substr(i,2);
                if(w==x)
                {
                    count++;
                }
            }
            v.pb(mp(count,x));
        }
        sort(v.begin(),v.end());
        cout<<v[v.size()-1].ss<<endl;

    return 0;
}

