#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=1;i<=2*n;i++)
#define debug cout<<"debug"<<endl;
ll a[200][100];
ll i,j,x,y,z,count=0,sum=0,n,m;
void f(ll n,ll m,ll x,ll y)
{
    if(n<1)return;
    else if(m<0)
    {
        f(n-1,x,x,y);
    }
    else
    {
        f(n,m-1,x,y);
        a[n][m]+=a[n+y][m];
    }

}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///
      
        cin>>n>>m;
        x=m;
        rep(i,n)
        {
            for(ll j=1;j<=m;j++)
            cin>>a[i][j];
        }

        f(n,m,m,n);
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }

    return 0;
}

