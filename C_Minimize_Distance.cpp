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
     
    Quicksilver;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,sum1=0,n,m;
        cin>>n>>m;
        ll a[n+1];
        vector<ll>v,vv;
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
                v.pb(-a[i]);
            else vv.pb(a[i]);
        }
        sort(v.begin(),v.end());
        sort(vv.begin(),vv.end());
        if(v.size()==0)
        {
           ll k=n/m,k1=n%m;
           for(ll i=k1+m-1;i<vv.size();i+=m)
           {
               sum+=2*(vv[i]);
           }
           if(n%m!=0)
           {
               sum+=2*vv[k1-1];
           }
           sum-=vv[vv.size()-1];
           cout<<sum<<endl;
        }
        else if(vv.size()==0)
        {
            ll k=n/m,k1=n%m;
           for(ll i=k1+m-1;i<v.size();i+=m)
           {
               sum+=2*(v[i]);
           }
           if(n%m!=0)
           {
               sum+=2*v[k1-1];
           }
           sum-=v[v.size()-1];
           cout<<sum<<endl;
        }
        else
        {
           ll k=vv.size()/m,k1=vv.size()%m;
           for(ll i=k1+m-1;i<vv.size();i+=m)
           {
               sum+=2*(vv[i]);
           }
           if(vv.size()%m!=0)
           {
               sum+=2*vv[k1-1];
           }
           
           ll k2=v.size()/m,k3=v.size()%m;
           for(ll i=k3+m-1;i<v.size();i+=m)
           {
               sum+=2*(v[i]);
           }
           if(v.size()%m!=0)
           {
               sum+=2*v[k3-1];
           }
           if(v[v.size()-1]>vv[vv.size()-1])
           sum-=v[v.size()-1];
           else sum-=vv[vv.size()-1];
           cout<<sum<<endl;
        }
        
    }


    return 0;
}

