#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int main()
{
    ll n,m,x,y,z,sum=0,sum1=0,i,j,count=0;
    cin>>n;
    ll a[n+1],b[n+1];
    rep(i,n)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    rep(i,n)
    {
        a[i]=a[i]+a[i-1];
    }
    sort(b+1,b+n+1);
    rep(i,n)
    {
        b[i]=b[i]+b[i-1];
    }
    cin>>m;
    while(m--)
    {
        ll t,l,r;
        cin>>t>>l>>r;
        if(t==1)
        {
                cout<<(a[r]-a[l-1])<<endl;
        }
        else if(t==2)
        {
                cout<<(b[r]-b[l-1])<<endl;
        }
    }
    return 0;
}