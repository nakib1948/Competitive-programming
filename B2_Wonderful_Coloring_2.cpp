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
        ll a[n],b[n];
        memset(b,0,sizeof(b));
        map<ll,vector<ll> >v;

        rep(i,n)
        {
            cin>>a[i];
            v[a[i]].pb(i);
        } 
        vector<ll>v1;

        for(auto it:v)
        {
            if(it.ss.size()>=m)
            {
                ll k=1;
                for(auto it1:it.ss)
                {
                    b[it1]=k;
                    k++;
                    if(k>m)
                    break;
                    
                }
            }
            else
            {
                for(auto it1:it.ss)
                {
                    v1.pb(it1);
                }
            }
        }

        if(v1.size()>0)
        {
            x=(v1.size()/m)*m;
            ll k=1;
            for(ll i=0;i<x;i++)
            {
                b[v1[i]]=k;
                k++;
                if(k>m)
                k=1;
            }
        }
        for(ll i=0;i<n;i++)
        cout<<b[i]<<" ";
        cout<<endl;
    }


    return 0;
}

