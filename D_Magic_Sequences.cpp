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
     
  
        ll i,j,x,y,z=0,count=0,sum=0,n,m;
        cin>>n;
        ll a[n+1];
        vector<ll>v,v1;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]%2 == 0)
            v.pb(a[i]);
        }
        if(n==1)cout<<1<<endl;
        else{
        sort(v.begin(),v.end());
        sort(a+1,a+n+1);
        for(ll i=1;i<=n;i++)
        {
            if(a[i]==v[v.size()-1])
            {
                z=i;
                break;
             }
        }
        if(z>0)
        {
            for(ll i=z;i<=n;i++)
            {
                for(ll j=i+1;j<=n;j++)
                {
                      if( __gcd(a[i],a[j])>1)
                        {
                            count++;
                            i=j;
                            break;
                        }
                }
            }
        }
        
        cout<<v.size()+count<<endl;
        }

    return 0;
}

