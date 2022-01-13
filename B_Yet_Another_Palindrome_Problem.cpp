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
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n],b[5005],c[5005];
        memset(b,-1,sizeof(b));
        memset(c,-1,sizeof(c));
        map<ll,ll>mp;
        rep(i,n)
        {
            cin>>a[i];
            if(b[a[i]]==-1)
            b[a[i]]=i;
            else 
            c[a[i]]=i;
            mp[a[i]]++;
        }
        bool ok=false;
        for(ll i=0;i<n-2;i++)
        {
           if(a[i]==a[i+2])
           {
               ok=true;
               break;
           }
        }
        for(ll i=0;i<n-3;i++)
        {
            if(a[i]==a[i+3] && a[i+1]==a[i+2])
            {
                ok=true;
                break;
            }
        }
        if(!ok)
        {
            for(auto it:mp)
            {
                if(it.ss>1)
                {
                    if(c[it.ff]-b[it.ff]>1)
                    {
                        ok=true;
                        break;
                    }
                }
            }
        }
        cout<<(ok? "YES":"NO")<<endl;
    }


    return 0;
}

