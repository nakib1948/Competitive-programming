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
    
        ll i,j,x=INT_MAX,y=INT_MAX,z,count=INT_MAX,sum=0,n,k;
        cin>>n>>k;
        ll a[n];
        vector<ll>v,v1;
        rep(i,n)
        {
            cin>>a[i];
            sum+=a[i];
            count=min(count,a[i]);
           if(a[i]>=0) v.pb(a[i]);
           else v1.pb(a[i]);
        }
        if(v1.size()==0)
        {
            if(k&1)
            cout<<sum-(2*count)<<endl;
            else 
            cout<<sum<<endl;
        }
        else
        {
            sum=0;
            if(k<=v1.size())
            {
                sort(a,a+n);
                for(ll i=0;i<n;i++)
                {
                    if(i<k)
                    sum+=abs(a[i]);
                    else 
                    sum+=a[i];
                }
                cout<<sum<<endl;
            }
            else{
            for(ll i=0;i<v1.size();i++)
            {
                sum+=abs(v1[i]);
                x=min(x,abs(v1[i]));
            }
            for(ll i=0;i<v.size();i++)
            {
                sum+=v[i];
                y=min(y,v[i]);
            }
              k-=v1.size();
              x=min(x,y);
              if(k&1)
              cout<<sum-(2*x)<<endl;
              else 
              cout<<sum<<endl;
            }
        }
     


    return 0;
}

