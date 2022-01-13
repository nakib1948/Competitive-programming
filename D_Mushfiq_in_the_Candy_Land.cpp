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
        cin>>n>>m;
        ll a[n+1],b[n+1];
        b[0]=0;
        set<ll>s;
        rep(i,n)
        {
            cin>>a[i];
        }
        for(ll i=n;i>=1;i--)
        {
            s.insert(a[i]);
            b[i]=s.size();
        }
        
        while(m--)
        {
            cin>>x;
            cout<<b[x]<<endl;
        }


    return 0;
}

