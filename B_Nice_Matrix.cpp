#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        ll a[n][m];
        rep(i,n)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                vector<ll>v;
                v.pb(a[i][j]);
                v.pb(a[i][m-j-1]);
                v.pb(a[n-i-1][j]);
                sort(v.begin(),v.end());
                a[i][j]=v[1];
                a[i][m-j-1]=v[1];
                a[n-i-1][j]=v[1];
                sum+=((v[1]-v[0])+(v[2]-v[1]));
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}

