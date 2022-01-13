#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
ll b[100005],c[100005];
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
  
        ll i,j,x=0,y=0,z=0,count=0,sum=0,n;
        cin>>n;
        ll a[n+1];
        map<ll,ll>m;
        vector<pair<ll,ll> >v;

        rep(i,n)
        {
            cin>>a[i];
            if(b[a[i]]==0)
            {
                b[a[i]]=i;
            }
            else if(c[a[i]]==0)
            {
                c[a[i]]=i;
            }
            m[a[i]]++;
        }
        for(auto it:m)
        {
           
            if(it.ss==1)
            {
                v.pb(mp(it.ff,0));
            }
            else if(it.ss==2)
            {
               
                v.pb(mp(it.ff,c[it.ff]-b[it.ff]));
            }

            else if(it.ss>2)
            {
               
                bool ok=true;
                z=c[it.ff]-b[it.ff];
                sum=2;
                for(ll i=c[it.ff]+z;i<=n;i+=z)
                {
                    if(a[i]==it.ff)
                    {
                         sum++;
                    }
                    else 
                    {
                        ok=false;
                        break;
                    }
                    if(sum==it.ss)
                    break;
                }
                if(ok && sum==it.ss)
                v.pb(mp(it.ff,z));
            }
        }
        cout<<v.size()<<endl;
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i].ff<<" "<<v[i].ss<<endl;
        }


    return 0;
}

