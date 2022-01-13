#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        string s;
        cin>>s;
     
        bool ok=true;
        vector<ll>v,v1;
        for( i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
               v.pb(i);
            }
            else v1.pb(i);
        }
        v.pb(i-1);
        for(ll i=1;i<v.size();i++)
        {
            if(v[i]-v[i-1]==1)count++;
            if(i==v.size()-1)
            {
                if((v[i]-v[i-1])>1)
                  ok=false;
            }
            else if((v[i]-v[i-1])>2)
            ok=false;
        }
        for(ll i=1;i<v1.size();i++)
        {
            if(v1[i]-v1[i-1]==1)sum++;
        }
       
        if(count==0)cout<<"yes"<<endl;
        else if(sum==0)cout<<"YES"<<endl; 
        else if(v.size()==0)
        cout<<"YES"<<endl;
        else
        cout<<(ok?"YES":"NO")<<endl;
    }


    return 0;
}

