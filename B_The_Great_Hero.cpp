
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z=0,count=0,sum=0,n;
        cin>>x>>y>>n;
        ll a[n],b[n];
        pair<ll,ll>pa[n];
        rep(i,n)
        {
           cin>>pa[i].ff;
        }
        rep(i,n)
        {
            cin>>pa[i].ss;
        }
        sort(pa,pa+n);
        for(ll i=0;i<n-1;i++)
        {
            ll k=ceil((pa[i].ss*1.0)/(x*1.0));
            ll k1=k*pa[i].ff;
            y-=k1;
        }
       
        if( y<=0)
          cout<<"NO"<<endl;
        else
        {
            if(y>=pa[n-1].ff)
            {
                ll k=ceil((pa[n-1].ss*1.0)/(x*1.0));
                ll k2=ceil((y*1.0)/(pa[n-1].ff*1.0));
                if(k<=k2)
                cout<<"YES"<<endl;
                else 
                cout<<"NO"<<endl;
            }
            else
            {
                if(x>=pa[n-1].ss)
                cout<<"YES"<<endl;
                else 
                cout<<"NO"<<endl;
            }
            
            
        }
    }

    return 0;
}

