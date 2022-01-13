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
  
        ll i,j,x,y,n,m;
        double sum=0.0,count=50;
        cin>>n>>m;double z=m;
        vector<pair<ll,ll> >v;
        while(n--)
        {
            cin>>x>>y;
            v.pb(mp(x,y));
        }
        double a=v[0].ff,b=v[0].ss;
        for(ll i=1;i<v.size();i++)
        {
            double a1=v[i].ff,b1=v[i].ss;
            double k= sqrt(((a-a1)*(a-a1)+((b-b1)*(b-b1))));
            sum+=k;
            a=v[i].ff,b=v[i].ss;
        }
       sum=sum*(z/50.0);
       printf("%.9lf\n",sum);
    


    return 0;
}

