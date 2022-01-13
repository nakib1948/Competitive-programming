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
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        x=n;
        map<char,ll>mp;
        while(n--)
        {
            string s;
            cin>>s;
            for(ll i=0;i<s.size();i++)
            {
                mp[s[i]]++;
            }
        }
        bool ok=true;
        for(auto it:mp)
        {
            if((it.ss%x)!=0){
                ok=false;
                break;
            }
            
        }
        cout<<(ok ? "YES":"NO")<<endl;
    }


    return 0;
}

