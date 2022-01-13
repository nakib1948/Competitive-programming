#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

       Quicksilver;
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        bool ok=false;
        vector<pair<string,string> >v;
        for(ll i=0;i<n;i++)
        {
            string s,w;
            cin>>s>>w;
            v.pb(mp(s,w));
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(v[i].ff==v[j].ff && v[i].ss==v[j].ss)
                {
                    ok=true;
                    break;
                }
            }
        }
        cout<<(ok?"Yes":"No")<<endl;


    return 0;
}

