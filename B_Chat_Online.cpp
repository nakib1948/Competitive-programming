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
     ///"In the name of Allah,most gracious and most merciful"///

    heyyoo;
   
    ll i,j,x,y,z,count=0,sum=0,n,m;
    cin>>n>>m>>x>>y;
    vector<pair<ll,ll> >v,v1;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        v.pb(mp(a,b));
    }
    while(m--)
    {
        ll a,b;
        cin>>a>>b;
        v1.pb(mp(a,b));
    }
    
    for(ll l=x;l<=y;l++)
    {
        sum=0;
        for(ll i=0;i<v1.size();i++)
        {
            ll p=v1[i].ff+l,q=v1[i].ss+l;
            for(ll j=0;j<v.size();j++)
            {
                if(p>v[j].ss)
                {
                    continue;
                }
                else if(q<v[j].ff)
                {
                    continue;
                }
                else 
                {
                    sum=1;
                    count++;
                    break;
                }
            }
            if(sum==1)
            break;
        }
    }

    cout<<count<<endl;

    return 0;
}

