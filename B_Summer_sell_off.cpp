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
     
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        vector<pair<ll,ll> >v;
        while(n--)
        {
            cin>>x>>y;
            v.pb(mp(y,x));
        }
        sort(v.rbegin(),v.rend());
       
        for(ll i=0;i<v.size();i++)
        {
            if(m>0 && v[i].ss>0 && v[i].ss<v[i].ff)
            {
                m--;
                ll k=v[i].ss*2;
                if(k>v[i].ff)
                sum+=v[i].ff;
                else 
                sum+=k;
            }
            else
            {
                if(v[i].ss>v[i].ff)
                sum+=v[i].ff;
                else 
                sum+=v[i].ss;
            }
            
        }
        cout<<sum<<endl;

    return 0;
}

