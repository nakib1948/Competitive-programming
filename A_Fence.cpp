#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define kk ios::sync_with_stdio(false); cin.tie(0);
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    kk;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>x>>y>>z;
        ll a[3];
        a[0]=x;a[1]=y;a[2]=z;
        sort(a,a+3);
        
        j=a[2]-a[1];
        sum=ceil(sqrt((j*j)+(a[0]*a[0])));
        cout<<sum<<endl;
    }


    return 0;
}

