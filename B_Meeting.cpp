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

        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m>>x>>y;
        cin>>z;
        vector<pair<pair<ll,ll>,ll> >v;
        if(m>y)
        {
            for(ll i=y;i<=m;i++)
            {
                v.pb(mp(mp(n,i),0));
               
                v.pb(mp(mp(x,i),0));
               
            }
            for(ll i=n+1;i<x;i++)
            {
                 v.pb(mp(mp(i,m),0));
                 v.pb(mp(mp(i,y),0));
                
            }
        }
        else
        {
             for(ll i=m;i<=y;i++)
            {
                 v.pb(mp(mp(n,i),0));
               
                v.pb(mp(mp(x,i),0));
            }
            for(ll i=n+1;i<x;i++)
            {
                  v.pb(mp(mp(i,m),0));
                 v.pb(mp(mp(i,y),0));
            }
        }
        
        while(z--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            for(auto it:v)
            {
                ll k=((it.ff.ff-a)*(it.ff.ff-a))+((it.ff.ss-b)*(it.ff.ss-b));
                //cout<<k<<endl;
                // cout<<it.ff.ff<<" "<<it.ff.ss<<" "<<k<<" "<<c*c<<endl;
                if(k<=(c*c))
                {
                    it.ss=1;
                }

            }
         //   cout<<endl;
          
        }
          for(auto it:v)
            {
                if(it.ss==0)
                count++;
            }
        cout<<v.size()-count<<endl;
        // cout<<count<<endl;
        // for(auto it:v)
        // {
        //     cout<<it.ff.ff<<" "<<it.ff.ss<<" "<<it.ss<<endl;
        // }
    return 0;
}

