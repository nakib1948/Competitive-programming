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
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
      
        vector<string>v,v1;
       
        for(ll i=1;i<(n+n);i++)
        {
            string s;
            cin>>s;
            v.pb(s);
        }
        for(ll i=0;i<m;i++)
        {
            map<char,ll>mp;
            for(ll j=0;j<v.size();j++)
            {
                mp[v[j][i]]++;
            }
            for(auto it:mp)
            {
                if(it.ss&1){
                cout<<it.ff;
                break;
                }
            }
        }
        cout<<endl;
       
    }


    return 0;
}

