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
        ll i,j,x,y,z,count=1,sum=1,n,m;
        cin>>n>>x>>y;
        vector<ll>v,v1;
        map<ll,ll>mp;
        v.pb(x);
        mp[x]=1,mp[y]=1;
        for(ll i=n;i>=1;i--)
        {
            if(i==x || i==y)
            continue;
            else
            {
                v.pb(i);
                mp[i]=1;
                count++;
                if(count==(n/2))
                break;
            }
        }
        for(ll i=1;i<=n;i++)
        {
            if(mp[i]==0)
            v1.pb(i);
        }
        v1.pb(y);
        bool ok=true;
        for(ll i=0;i<v.size();i++)
        {
            if(v[i]<x)
            {
                ok=false;
                break;
            }
        }
        for(ll i=0;i<v1.size();i++)
        {
            if(v1[i]>y)
            {
                ok=false;
                break;
            }
        }

        if(ok)
        {
            for(ll i=0;i<v.size();i++)
            cout<<v[i]<<" ";
            for(ll i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
            cout<<endl;
        }
        else cout<< -1 <<endl;

    }


    return 0;
}

