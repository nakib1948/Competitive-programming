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
        cin>>n>>m;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        vector<pair<ll,ll> >v;
        vector<ll>v1;
        for(ll i=0;i<m;i++)
        {
            cin>>x>>y;
            v.pb(mp(x,y));
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<m;i++)
        {
            sum+=v[i].ss;
            v1.pb(v[i].ff);
            v[i].ss=sum;
        }
        for(ll i=0;i<n;i++)
        {
        ll k=lower_bound(v1.begin(),v1.end(),a[i])-v1.begin();
        if(v1[k]==a[i])
        cout<<v[k].ss<<" ";
        else
        {
            if(k==0)
            cout<<0<<endl;
            else 
            cout<<v[k-1].ss<<" ";
        }
        }
        cout<<endl;
 
    return 0;
}
 