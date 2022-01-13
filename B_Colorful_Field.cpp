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
     
        ll i,j,x,y,z,count=1,sum=0,n,m,q,t;
        cin>>n>>m>>q>>t;
        vector<ll>v;
        vector<pair<ll,ll> >pa;
        while(q--)
        {
            cin>>x>>y;
            ll j=((x-1)*m)+y;
            pa.pb(mp(x,y));
            v.pb(j);
        }
        sort(v.begin(),v.end());
      
        while(t--)
        {
            ll x,y;
            cin>>x>>y;
            bool ok=true;
            for(ll i=0;i<pa.size();i++)
            {
                if(x==pa[i].ff && y==pa[i].ss)
                {
                    cout<<"Waste"<<endl;
                    ok=false;
                    break;
                }
            }
            if(ok){
            ll j=((x-1)*m)+y;
            ll q=lower_bound(v.begin(),v.end(),j)-v.begin();
            j-=q;
            if(j%3==1)
             cout<<"Carrots"<<endl;
            else if(j%3==2)
             cout<<"Kiwis"<<endl;
            else if(j%3==0)
             cout<<"Grapes"<<endl;
            }           
        }


    return 0;
}

