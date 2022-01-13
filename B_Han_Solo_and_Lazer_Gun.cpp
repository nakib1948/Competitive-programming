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
  
        ll i,j,x,y,z,count=0,sum=0,n,ans=0;
        cin>>n>>x>>y;
        map<pair<ll,ll>,ll>m;
        pair<ll,ll>pa[n];
        for(ll i=0;i<n;i++)
        {
            cin>> pa[i].ff>>pa[i].ss;
            m[{pa[i].ff,pa[i].ss}]=0;
        }
    
        for(ll i=0;i<n;i++)
        {
            if(m[{pa[i].ff,pa[i].ss}]==0)
            {
                count++;
                m[{pa[i].ff,pa[i].ss}]=1;
                ll x1=pa[i].ff,y1=pa[i].ss;
                for(ll j=0;j<n;j++)
                {
                    if(pa[j].ff==pa[i].ff && pa[j].ss==pa[i].ss)
                    continue;
                    else {
                        ll x2=pa[j].ff,y2=pa[j].ss;
                        ll a = x*(y1-y2) + x1*(y2-y) + x2*(y-y1);
                        if(a==0)
                        m[{pa[j].ff,pa[j].ss}]=1;
                    }
                }
            }
        }
        cout<<count<<endl;

    return 0;
}

