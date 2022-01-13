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

    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        vector< pair<ll,ll> >v;
        vector<char>v1;
        ll a[n],b[n];
        
        rep(i,n)
        {
            cin>>a[i]>>b[i];
            v.pb(mp(a[i],b[i]));
        }
        sort(v.begin(),v.end());

        bool ok=true;
        for(ll i=0;i<v.size();i++)
        {
            for(ll j=i;j<v.size();j++)
            {
                if(v[i].ss>v[j].ss)
                {
                    ok=false;
                    break;
                }
            }
        }
        if(!ok)
          cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;

            ll r=v[0].ff-0;
            ll y=v[0].ss-0;
            for(ll i=0;i<r;i++)
            {
                v1.pb('R');
            }

            for(ll j=0;j<y;j++)
            {
                v1.pb('U');
            }
           
            for(ll i=1;i<v.size();i++)
            {
               ll k=v[i].ff-v[i-1].ff;
               ll w=v[i].ss-v[i-1].ss;
               for(ll i=0;i<k;i++)
               {
                   v1.pb('R');
               }
               for(ll i=0;i<w;i++)
               {
                   v1.pb('U');
               }
               
            }
            for(auto k:v1)
            {
                cout<<k;
            }
            cout<<endl; 
        }
        

    }


    return 0;
}

