#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
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
        vector<ll>v;
        ll a[n],b[n];
        rep(i,n)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]!=b[i])
            {
                count=i;
                break;
            }
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                sum=i;
                break;
            }
        }
     
        for(ll i=sum;i<=count;i++)
        {
            v.pb(a[i]);
        }
        reverse(v.begin(),v.end());
        x=sum;
        for(ll j=0;j<v.size();j++)
        {
            a[x]=v[j];
            x++;
        }
        bool ok=true;
        for(ll i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                ok=false;
                break;
            }

        }
        if(ok)
        cout<<"yes"<<endl<<sum+1<<" "<<count+1<<endl;
        else 
        cout<<"no"<<endl;

    return 0;
}

