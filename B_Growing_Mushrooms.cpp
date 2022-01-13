#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;

int main()
{
        ///"Bismillahir Rahmanir Raheem"///

        ll i,count=0,sum=0,n;
        double t1,t2,m,x,y;
        cin>>n>>t1>>t2>>m;
        vector<pair<double,ll> >v;
        rep(i,n)
        {
            double x1,y1;
            cin>>x>>y;
            x1=min(x,y);
            y1=max(x,y);
            double ans1=(x1*t1)-(x1*t1*(m/100.0));
            double ans2=ans1+(y1*t2);
            double ans3=(y1*t1)-(y1*t1*(m/100.0));
            double ans4=ans3+(x1*t2);
            double final=max(ans2,ans4);
            v.pb(mp(final,-(i+1)));
        }
        sort(v.rbegin(),v.rend());
        for(ll i=0;i<v.size();i++)
        {
            cout<<-v[i].ss<<" ";
            double k=v[i].ff;
            printf("%0.2lf\n",k);
        }


    return 0;
}

