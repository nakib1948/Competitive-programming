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
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll i=1;i<n;i++)
        {
            ll k=abs(a[i]-a[i-1]);
            sum=max(sum,k);
        }
        double ans=double(sum)/2.0;
        if(a[0]!=0)
        {
            ans=max(ans,double(a[0]));
        }
        if(a[n-1]!=m)
        {
            ans=max(ans,double(m-a[n-1]));
        }
        printf("%.10lf\n",ans);

    return 0;
}

