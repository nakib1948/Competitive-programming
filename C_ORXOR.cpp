#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
   
        ll i,j,x,y,z,count=0,sum=0,n,m,ans=0,final=INT_MAX;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            //ans=ans^a[i];
        }
        //final=min(final,ans);
       // ans=0;
        x=1;
        while(x<=n)
        {
            count=0;ans=0;
            vector<ll>v;
            sum=0;
            ll k=n/x;
           for(ll j=0;j<(k*x);j++)
           {
                sum++;
                if(sum==x)              
                {
                    sum=0;
                    count=count|a[j];
                    //cout<<count<<endl;
                    v.pb(count);
                    count=0;
                }
                else
                {
                    count=count|a[j];
                }
                
           }
           count=0;
           for(ll i=k*x;i<n;i++)
           {
               count=count|a[i];
           }
           v.pb(count);
           x++;
           for(ll i=0;i<v.size();i++)
           {
               ans=ans^v[i];
           }
           final=min(final,ans);
           
        }
        ll p=0;
        while(p<n-1)
        {
            count=0,ans=0;
            vector<ll>v;
            for(ll i=0;i<=p;i++)
            {
                count=count|a[i];
            }
            v.pb(count);
            count=0;
            for(ll i=p+1;i<n;i++)
            {
                count=count|a[i];
            }
            v.pb(count);
            ans=v[0]^v[1];
            final=min(final,ans);
            p++;

        }

        cout<<final<<endl;

    return 0;
}

