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
        cin>>n;
        ll a[n];
        vector<pair<ll,char> >v;
        rep(i,n)
        {
            cin>>a[i];
            v.pb(mp(a[i],'R'));
        }
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=0;j<n-i-1;j++)
            {
                if(v[j].ff>v[j+1].ff)
                {
                    ll k=v[j].ff;
                    v[j].ff=v[j+1].ff;
                    v[j+1].ff=k;

                    if(v[j].ss=='R')
                    v[j].ss='L';
                    else v[j].ss='R';

                    if(v[j+1].ss=='R')
                    v[j+1].ss='L';
                    else v[j+1].ss='R';

                    for(auto it:v)
                    cout<<it.ss<<" ";
                    cout<<endl;
                }
            }
        }
        bool ok=true;
        for(ll i=0;i<v.size();i++)
        {
            if(v[i].ss=='L')
            {
                ok=false;
                break;
            }
        }
        cout<<(ok ? "YES":"NO")<<endl;
        for(auto it:v)
        cout<<it.ff<<" ";
    }


    return 0;
}

