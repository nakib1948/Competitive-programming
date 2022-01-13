#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n+1],b[n+1];
        rep(i,n)
        {cin>>a[i];b[a[i]]=i;}
        cin>>m;
        while(m--)
        {
            ll x;cin>>x;
            sum+=b[x];
            count+=(n-b[x])+1;
        }
        cout<<sum<<" "<<count<<endl;


    return 0;
}

