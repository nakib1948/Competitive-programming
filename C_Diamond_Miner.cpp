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
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        vector<pair<ll,ll> >v,v1;
        for(ll i=0;i<2*n;i++)
        {
            cin>>x>>y;
            if(x==0)
            v.pb(mp(abs(y),x));
            else if(y==0)
            v1.pb(mp(abs(x),y));
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        double ans=0.0;
        for(ll i=0;i<v.size();i++)
        {
            double x1=v[i].ss,y1=v[i].ff,x2=v1[i].ff,y2=v1[i].ss;
            ans+=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        }
        printf("%.15lf\n",ans);
    }


    return 0;
}

