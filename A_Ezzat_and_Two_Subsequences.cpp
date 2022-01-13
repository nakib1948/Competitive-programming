#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,n,m;
        double x,y,z,count=-1e9,sum=0.0;
        scanf("%lld",&n);
        double a[n],b[n];
        
        for(ll i=0;i<n;i++)
        {
              scanf("%lf",&a[i]);
            count=max(count,a[i]);
            sum+=a[i];
        }
        sum-=count;
        x=count+(sum/(n-1));
        
        printf("%.10lf\n",x);
    }


    return 0;
}